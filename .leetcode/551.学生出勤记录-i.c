#include<stdbool.h>
/*
 * @lc app=leetcode.cn id=551 lang=c
 *
 * [551] 学生出勤记录 I
 */

// @lc code=start
bool checkRecord(char* s) {
    //连续迟到三天，或者总共缺勤两次，返回false
    int s_len=strlen(s);
    int a_num=0; //记录缺席次数
    for(int i=0;i<s_len;i++){
        if(s[i]=='A')a_num++;
    }
    if(a_num>=2)return false;  //缺席两次及以上
    
    if(s_len<=2)return true;   //三天都没有，肯定不会连续迟到三天
    for(int i=0;i<s_len-2;i++){
        if(s[i]=='L'){   //迟到一次，看之后迟不迟到
            if(s[i+1]=='L' && s[i+2]=='L')return false;
        }
    }
    return true;
}
// @lc code=end

