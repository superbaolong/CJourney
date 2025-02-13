#include<stdbool.h>
/*
 * @lc app=leetcode.cn id=680 lang=c
 *
 * [680] 验证回文串 II
 */

// @lc code=start
bool isHuiwen(char*s,int left,int right){
    //判断是不是回文串，从s[left]到s[right]，包含两端
    while(left<right){
        if(s[left]!=s[right])return false;
        left++;
        right--;
    }
    return true;
}

bool validPalindrome(char* s) {
    int s_len=strlen(s);
    if(s_len<=2)return true;
    int left=0;
    int right=s_len-1;
    while(left<right){
        if(s[left]!=s[right]){
            if(isHuiwen(s,left+1,right))return true;
            return isHuiwen(s,left,right-1);
        }
        left++;
        right--;
    }
    return true;
}
// @lc code=end

