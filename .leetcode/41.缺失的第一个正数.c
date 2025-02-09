/*
 * @lc app=leetcode.cn id=41 lang=c
 *
 * [41] 缺失的第一个正数
 */

// @lc code=start
int firstMissingPositive(int* nums, int numsSize) {
    int max=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>max)max=nums[i];
    }
    if(max<=0)return 1;
    int *hash=malloc(sizeof(int)*(max+1));
    for(int i=0;i<=max;i++){
        hash[i]=0;
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i]>0){
            hash[nums[i]]++;
        }
    }
    for(int i=1;i<=max;i++){
        if(hash[i]==0)return i;
    }
    return max+1;
}
// @lc code=end

