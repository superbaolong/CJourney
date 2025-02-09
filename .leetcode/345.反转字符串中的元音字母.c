#include<stdbool.h>
#include<stdio.h>
/*
 * @lc app=leetcode.cn id=345 lang=c
 *
 * [345] 反转字符串中的元音字母
 */

// @lc code=start
bool isVowels(char s){
    if(s=='a')return true;
    if(s=='e')return true;
    if(s=='i')return true;
    if(s=='o')return true;
    if(s=='u')return true;
    if(s=='A')return true;
    if(s=='E')return true;
    if(s=='I')return true;
    if(s=='O')return true;
    if(s=='U')return true;
    return false;
}
char* reverseVowels(char* s) {
    int num[3000000];    //存储元音字母的序号
    int s_len=strlen(s);
    int i=0,j=0;
    for(i;i<s_len;i++){
        if(isVowels(s[i])){
            num[j++]=s[i];
        }
    }
    int num_len=j;  //一共有num_len个元音字母
    for(i=0;i<num_len/2;i++){
        int temp=num[i];
        num[i]=num[num_len-i-1];
        num[num_len-i-1]=temp;
    }
    //这下元音字母已经倒序存在num[]里面了，我再存回s里
    j=0;
    for(i=0;i<s_len;i++){
        if(isVowels(s[i])){
            s[i]=num[j++];
        }
    }
    return s;
}
// @lc code=end

