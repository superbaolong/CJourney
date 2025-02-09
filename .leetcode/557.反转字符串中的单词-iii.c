/*
 * @lc app=leetcode.cn id=557 lang=c
 *
 * [557] 反转字符串中的单词 III
 */

// @lc code=start

//反转字符串中从第x个到第y个（包含）
void reverse(char *s, int x, int y) {
    while (x < y) {
        char temp = s[x];
        s[x] = s[y];
        s[y] = temp;
        x++;
        y--;
    }
}

char* reverseWords(char* s) {
    int s_len=strlen(s);
    int left=0,right=0;
    for(;right<s_len;right++){
        if(s[right]==' '){
            reverse(s,left,right-1);
            left=right+1;
        }
        if(right==s_len-1){   //遍历到最后一个字母了
            reverse(s,left,right);
        }
    }
    return s;
}
// @lc code=end

