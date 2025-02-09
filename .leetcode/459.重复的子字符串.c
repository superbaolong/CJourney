#include<stdbool.h>
#include<stdio.h>
/*
 * @lc app=leetcode.cn id=459 lang=c
 *
 * [459] 重复的子字符串
 */

// @lc code=start

//是质数
bool iszhishu(int x){
    for(int i=2;i<x;i++){
        int temp=x/i;
        if(temp*i==x)return false;
    }
    return true;
}
bool issame(char *s,int s_len){
    int i=0;
    while(s[i]==s[0]){
        i++;
    }
    if(i==s_len)return true;
    return false;
}

bool repeatedSubstringPattern(char* s) {
    int s_len=strlen(s);
    if(s_len==1){return false;}   //只有一个数
    else if(issame(s,s_len)){return true;}  //不止一个数，每个数都相同
    else if(iszhishu(s_len)){return false;}   //长度为质数，且不是每个数都相同
    else {
        // 尝试所有可能的子串长度
        for (int len = 1; len <= s_len / 2; len++) {
            if (s_len % len != 0) continue; // 长度必须能被整除
            bool match = true;
            for (int i = len; i < s_len; i++) {
                if (s[i] != s[i % len]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                return true; // 找到可以重复的子串
            }
        }
        return false; // 没有找到可以重复的子串
    }
}
// @lc code=end