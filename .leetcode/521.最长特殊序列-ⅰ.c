/*
 * @lc app=leetcode.cn id=521 lang=c
 *
 * [521] 最长特殊序列 Ⅰ
 */

// @lc code=start
int findLUSlength(char* a, char* b) {
    int a_len=strlen(a);
    int b_len=strlen(b);
    if(a_len == b_len){     //长度相同
        for(int i=0;i<a_len;i++){
            if(a[i]!=b[i])return a_len;  //只要有一个字母不同
        }
        return -1;    //所有字母都相同
    }
    //长度不同，1返回长的
    return (a_len>b_len)?a_len:b_len;
}
// @lc code=end

