/*
 * @lc app=leetcode.cn id=541 lang=c
 *
 * [541] 反转字符串 II
 */

// @lc code=start
// 反转字符串的部分区间，从索引 j 开始，反转 k 个字符
void reverse(char* s, int j, int k) {
    int left = j, right = j + k - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

char* reverseStr(char* s, int k) {
    int s_len=strlen(s);
    if(s_len==1)return s;
    int i=0;
    while(i+2*k<=s_len){    //先把前面的反转了
        reverse(s,i,k);
        i+=2*k;
    }
    //再把剩下的不够2k的反转
    if(s_len-i<k){
        reverse(s,i,s_len-i);
    }else if(s_len-i>=k && s_len-i<2*k){   //字符串小于2k个
        reverse(s,i,k);
    }
    return s;
}
// @lc code=end

