#include<stdbool.h>
/*
 * @lc app=leetcode.cn id=657 lang=c
 *
 * [657] 机器人能否返回原点
 */

// @lc code=start
bool judgeCircle(char* moves) {
    int hash[4]={0};
    int steps=strlen(moves);
    for(int i=0;i<steps;i++){
        if(moves[i]=='R'){
            hash[0]++;
        }
        if(moves[i]=='L'){
            hash[1]++;
        }
        if(moves[i]=='U'){
            hash[2]++;
        }
        if(moves[i]=='D'){
            hash[3]++;
        }
    }
    if(hash[0]==hash[1] && hash[2]==hash[3]){
        return true;
    }
    return false;
}
// @lc code=end

