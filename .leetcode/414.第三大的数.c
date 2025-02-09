/*
 * @lc app=leetcode.cn id=414 lang=c
 *
 * [414] 第三大的数
 */

// @lc code=start
int thirdMax(int* nums, int numsSize) {
    long long max=-2147483649;
    long long smax=-2147483649;
    long long tmax=-2147483649;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>max)max=nums[i];
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i]>smax && nums[i]<max)smax=nums[i];
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i]>tmax && nums[i]<smax)tmax=nums[i];
    }
    if(tmax==-2147483649)return max;
    return tmax;
}
// @lc code=end