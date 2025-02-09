/*
 * @lc app=leetcode.cn id=238 lang=c
 *
 * [238] 除自身以外数组的乘积
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int mul(int* num,int x,int numsSize){
    int result=1;
    for(int i=0;i<x;i++){
        result=result*num[i];
    }
    for(int i=x+1;i<numsSize;i++){
        result=result*num[i];
    }
    return result;
}

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int* result=malloc(sizeof(int)*(*returnSize));
    for(int i=0;i<*returnSize;i++){
        result[i]=mul(nums,i,numsSize);
    }
    return result;
}
// @lc code=end

