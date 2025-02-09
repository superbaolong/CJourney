#include<stdio.h>
#include<stdbool.h>
/*
 * @lc app=leetcode.cn id=326 lang=c
 *
 * [326] 3 的幂
 */

// @lc code=start
bool isPowerOfThree(int n) {
    if(n<1)return false;
    long long x=1;
    while(x<n){
        x=x*3;
    }
    if(x==n)return true;
    return false;
}
// @lc code=end

