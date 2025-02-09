#include<stdbool.h>
#include<stdio.h>
/*
 * @lc app=leetcode.cn id=383 lang=c
 *
 * [383] 赎金信
 */

// @lc code=start
bool canConstruct(char* ransomNote, char* magazine) {
    //ransonnote是maga的子集
    int hash[26]={0};
    int ran_len=strlen(ransomNote);
    int maga_len=strlen(magazine);
    for(int i=0;i<maga_len;i++){
        hash[magazine[i]-'a']++;
    }
    for(int i=0;i<ran_len;i++){
        hash[ransomNote[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(hash[i]<0)return false;
    }
    return true;
}
// @lc code=end

