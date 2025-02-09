/*
 * @lc app=leetcode.cn id=448 lang=c
 *
 * [448] 找到所有数组中消失的数字
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/*
 * @lc app=leetcode.cn id=448 lang=c
 *
 * [448] 找到所有数组中消失的数字
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    // 哈希表，0-numssize都初始化为0
    int hash[numsSize + 1];
    for (int i = 0; i <= numsSize; i++) {
        hash[i] = 0;
    }
    
    // 出现过的加一
    for (int i = 0; i < numsSize; i++) {
        hash[nums[i]]++;
    }
    
    // 计算消失的数字的数量
    *returnSize = 0;
    for (int i = 1; i <= numsSize; i++) {
        if (hash[i] == 0) {
            (*returnSize)++;
        }
    }
    
    // 动态分配内存来存储结果
    int* result = (int*)malloc(*returnSize * sizeof(int));
    int k = 0;
    for (int i = 1; i <= numsSize; i++) {
        if (hash[i] == 0) {
            result[k++] = i;
        }
    }
    
    return result;
}
// @lc code=end

/* 超时
    *returnSize=0;
    int i,j;
    for(i=1;i<=numsSize;i++){
        for(j=0;j<numsSize;j++){
            if(nums[j]==i){
                break;
            }
        }
        if(j==numsSize)(*returnSize)++;
    }
    int x=(*returnSize);
    int k=0;
    int* result=malloc(sizeof(int)*x);
    for(i=1;i<=numsSize;i++){
        for(j=0;j<numsSize;j++){
            if(nums[j]==i){
                break;
            }
        }
        if(j==numsSize)result[k++]=i;
    }
    return result;
*/
// @lc code=end

