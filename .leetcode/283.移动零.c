#include<stdio.h>
/*
 * @lc app=leetcode.cn id=283 lang=c
 *
 * [283] 移动零
 */

// @lc code=start
void moveZeroes(int* nums, int numsSize) {
    int j=0;
    //不是0的挪前面
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            nums[j]=nums[i];
            j++;
        }
    }
    //剩下的赋值0
    for(j=j;j<numsSize;j++){
        nums[j]=0;
    }
}
// @lc code=end

