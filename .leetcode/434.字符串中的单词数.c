#include<stdbool.h>

/*
 * @lc app=leetcode.cn id=434 lang=c
 *
 * [434] 字符串中的单词数
 */

// @lc code=start
int countSegments(char* s) {
    int s_len=strlen(s);
    int num=0;   //num个单词

    for(int i=0;i<s_len;i++){
        if((s[i]!=' ' && s[i+1]==' ')||(s[i]!=' ' && s[i+1]=='\0'))num++;
    }
    return num;
}
// @lc code=end

