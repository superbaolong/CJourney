#include<stdbool.h>

/*
 * @lc app=leetcode.cn id=409 lang=c
 *
 * [409] 最长回文串
 */

// @lc code=start


int longestPalindrome(char* s) {
    int num=0;       //长度最大为num
    int odd=0;   //奇数个数
    int hash[100]={0};
    int s_len=strlen(s);
    for(int i=0;i<s_len;i++){
        hash[s[i]-'A']++;
    }
    for(int i=0;i<100;i++){
        if(hash[i]%2==1){
            odd++;
            num+=hash[i]-1;
        }else{
            num+=hash[i];
        }
    }
    return(odd==0)?num:num+1;
}
// @lc code=end