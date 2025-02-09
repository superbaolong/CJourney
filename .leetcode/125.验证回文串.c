#include<stdbool.h>
#include<stdio.h>
#include <ctype.h>

/*
 * @lc app=leetcode.cn id=125 lang=c
 *
 * [125] 验证回文串
 */

// @lc code=start
bool isPalindrome(char* s) {
    if(*s=='\0')return true;

    int i=0,j=0;
    char temp[200000];

    while(s[i]!='\0'){
        //是小写字母或者数字直接存temp里
        if(isdigit(s[i]) || islower(s[i])){
            temp[j]=s[i];
            j++;
        //大写变小写放temp里
        }else if(isupper(s[i])){
            temp[j]=tolower(s[i]);   //tolower()可以把大写字母变成小写。
            j++;
        }
        i++;
    }
    int len=j;
    for(i=0;i<len/2;i++){
        if(temp[i]!=temp[len-i-1]){           
            return false;
        }
    }
    return true;
}
// @lc code=end

