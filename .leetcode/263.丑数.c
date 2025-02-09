#include<stdbool.h>
#include<stdio.h>
/*
 * @lc app=leetcode.cn id=263 lang=c
 *
 * [263] 丑数
 */

// @lc code=start

//题目的意思是除了2,3,5这三个质因数就没别的质因数了。比如14，你把235除掉他还剩个质因数7，那就不是丑数
bool isUgly(int n) {
    if (n <= 0) return false;  // 丑数必须是正整数
    while (n % 2 == 0) n /= 2; // 除去所有2的因子
    while (n % 3 == 0) n /= 3; // 除去所有3的因子
    while (n % 5 == 0) n /= 5; // 除去所有5的因子
    return n == 1;             // 如果最终结果为1，则是丑数
}
// @lc code=end

