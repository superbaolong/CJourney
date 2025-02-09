#include<stdbool.h>
#include<stdio.h>
/*
 * @lc app=leetcode.cn id=367 lang=c
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
bool isPerfectSquare(int num) {
    for(long long i=1;i<=num;i++){
        if(i*i==num)return true;
    }
    return false;
}
// @lc code=end

