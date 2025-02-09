#include<stdbool.h>
#include<stdio.h>

/*
 * @lc app=leetcode.cn id=231 lang=c
 *
 * [231] 2 的幂
 */

// @lc code=start
bool isPowerOfTwo(int n) {
    long long x=1;
    while(x<n){
        x=x*2;
    }
    return(x==n);
}
// @lc code=end

