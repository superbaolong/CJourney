#include<stdbool.h>
#include<stdio.h>

/*
 * @lc app=leetcode.cn id=292 lang=c
 *
 * [292] Nim 游戏
 */

// @lc code=start
bool canWinNim(int n) {
    //经过我仔细思考，只要不是4的倍数，我都能赢
    int temp=n/4;
    temp=temp*4;
    if(temp==n)return false;
    return true;
}
// @lc code=end

