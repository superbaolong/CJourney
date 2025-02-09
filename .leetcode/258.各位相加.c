#include<stdio.h>

/*
 * @lc app=leetcode.cn id=258 lang=c
 *
 * [258] 各位相加
 */

// @lc code=start
int addDigits(int num) {
    int a=0;
    while(num/10!=0){
        while(num!=0){
            a+=num%10;
            num=num/10;
        }
        num=a;
        a=0;
    }
    return num;
}
// @lc code=end

