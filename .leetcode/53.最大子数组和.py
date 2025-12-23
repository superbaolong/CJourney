#
# @lc app=leetcode.cn id=53 lang=python
#
# [53] 最大子数组和
#

# @lc code=start
class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans=nums[0]
        n=len(nums)   #数组长度
        dp=[0]*n    #dp记录以第i个为结尾的最大值
        dp[0]=nums[0]
        for i in range(1,n):
            dp[i]=max(nums[i]+dp[i-1],nums[i])

        ans=max(dp)
                    
        return ans
        
# @lc code=end

