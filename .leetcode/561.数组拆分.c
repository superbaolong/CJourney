#include<stdlib.h>
/*
 * @lc app=leetcode.cn id=561 lang=c
 *
 * [561] 数组拆分
 */

// @lc code=start
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int arrayPairSum(int* nums, int numsSize) {
    int sum=0;
    qsort(nums, numsSize, sizeof(int), compare);
    for(int i=0;i<numsSize;i++){
        if(i%2==0)sum+=nums[i];
    }
    return sum;
}
// @lc code=end

