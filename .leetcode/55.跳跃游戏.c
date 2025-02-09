#include<stdbool.h>
/*
 * @lc app=leetcode.cn id=55 lang=c
 *
 * [55] 跳跃游戏
 */

// @lc code=start
bool canJump(int* nums, int numsSize) {
    if(numsSize==1)return true;
    int jump[numsSize];
    for (int i = 0; i < numsSize; i++) {
        jump[i] = 0;
    }
    jump[numsSize-1]=1; //最后一位肯定是1
    for(int i=numsSize-2;i>=0;i--){
        for(int j=0; j <= nums[i] && i + j < numsSize;j++){
            if(jump[i+j]==1){
                jump[i]=1;
                break;
            }
        }
    }
    return jump[0];
}
// @lc code=end