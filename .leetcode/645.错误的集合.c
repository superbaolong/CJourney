/*
 * @lc app=leetcode.cn id=645 lang=c
 *
 * [645] 错误的集合
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    *returnSize=2;
    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = -1; // 重复的数字
    result[1] = -1; // 丢失的数字
    if(nums[0]!=1)result[1]=1;
    for(int i=1;i<numsSize;i++){
        if(nums[i]-nums[i-1]==0)result[0]=nums[i];
        if(nums[i]-nums[i-1]==2)result[1]=nums[i]-1;
    }
    if(result[1]==-1)result[1]=numsSize;
    return result;
}

// @lc code=end

