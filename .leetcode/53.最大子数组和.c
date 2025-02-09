/*
 * @lc app=leetcode.cn id=53 lang=c
 *
 * [53] 最大子数组和
 */

// @lc code=start
int max(int x,int y){
    return (x>y)?x:y;
}
int maxSubArray(int* nums, int numsSize) {
    int max_num=-10000000;
    int dp[numsSize];   //dp的含义，以nums【i】为结尾的最大值
    dp[0]=nums[0];
    for(int i=1;i<numsSize;i++){
        dp[i]=max(dp[i-1]+nums[i],nums[i]);
    }
    for(int i=0;i<numsSize;i++){
        if(dp[i]>max_num)max_num=dp[i];
    }
    return max_num;
}
// @lc code=end