#include<stdbool.h>

/*
 * @lc app=leetcode.cn id=392 lang=c
 *
 * [392] 判断子序列
 */

// @lc code=start
bool isSubsequence(char* s, char* t) {
    int s_len=strlen(s);
    int t_len=strlen(t);
    int temp=0;
    for(int i=0;i<s_len;i++){
        int j=0;
        for(j=temp;j<t_len;j++){
            if(t[j]==s[i]){
                temp=j+1;
                break;
            }
        }
        if(j==t_len)return false;
    }
    return true;
}
// @lc code=end

