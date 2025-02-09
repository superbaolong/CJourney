/*
 * @lc app=leetcode.cn id=15 lang=c
 *
 * [15] 三数之和
 */

// @lc code=start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** threeSum(int* nums, int numsSize, int* returnSize/*一共这么多个不同的三元组*/, int** returnColumnSizes) {
    int **three;
    *returnSize=0;
    three=malloc(sizeof(int *)*numsSize);
    for(int i=0;i<numsSize;i++){
        three[i]=malloc(sizeof(int)*3);
    }

    for(int i=0;i<numsSize-2;i++){
        for(int j=i+1;j<numsSize-1;j++){
            for(int k=j+1;k<numsSize;k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    three[*returnSize][0]=nums[i];
                    three[*returnSize][1]=nums[j];
                    three[*returnSize][2]=nums[k];
                    (*returnSize)++;               
            }
        }
    }
    return three;
}
// @lc code=end

