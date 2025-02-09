#include<stdbool.h>
#include<stdio.h>

/*
 * @lc app=leetcode.cn id=242 lang=c
 *
 * [242] 有效的字母异位词
 */

// @lc code=start


bool isAnagram(char* s, char* t) {
    int hash[26]={0};
    int s_len=strlen(s);
    int t_len=strlen(t);
    if(s_len!=t_len)return false;       //不一样长直接返回false
    //两个循环
    for(int i=0;i<s_len;i++){
        hash[s[i]-'a']++;
    }
    for(int i=0;i<t_len;i++){
        hash[t[i]-'a']--;
    }
    //判断哈希表是不是全为零
    for(int i=0;i<26;i++){
        if(hash[i]!=0)return false;
    }
    return true;
}
// @lc code=end

