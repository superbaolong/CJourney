#include<stdbool.h>
#include<stdio.h>

/*
 * @lc app=leetcode.cn id=205 lang=c
 *
 * [205] 同构字符串
 */

// @lc code=start

//终于看懂题目了，就是说每个字符对应一个字符，比如a对应A，那a就只能对应A，也不能有b对应A
bool isIsomorphic(char* s, char* t) {
    int len1 = strlen(s), len2 = strlen(t);
    // 两个字符串长度不等，返回false
    if(len1 != len2) return false;
    // 遍历s和t
    for(int i = 0; i < len1; i++){
        for(int j = i; j < len2; j++){
            int flag1 = (s[i] == s[j]);
            int flag2 = (t[i] != t[j]);
            // 若s中的两个字符不同，但映射到t中的两个字符相同，
            // 或s中的两个字符相同，但映射到t中的两个字符不同，返回false
            if((flag1 && flag2) || (!flag1 && !flag2)){
                return false;
            }
        }
    }
    return true;
}

// @lc code=end

