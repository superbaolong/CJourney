#include<stdbool.h>

/*
 * @lc app=leetcode.cn id=693 lang=c
 *
 * [693] 交替位二进制数
 */

// @lc code=start
bool hasAlternatingBits(int n) {
    int binary[50];
    int i=0;   //记录二进制位数
    while(n!=0){
        binary[i++]=n%2;
        n=n/2;
    }
    for(int j=1;j<i;j++){
        if(binary[j]==binary[j-1])return false;
    }
    return true;
}
// @lc code=end

