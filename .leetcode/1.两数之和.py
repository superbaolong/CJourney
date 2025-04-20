#
# @lc app=leetcode.cn id=1 lang=python
#
# [1] 两数之和
#

# @lc code=start
class Solution(object):
    def twoSum(self, nums, target):
        nums_len=len(nums)
        for i in range(0,nums_len):
            for j in range(i+1,nums_len):
                if(nums[i]+nums[j] == target):
                    return [i,j]
    
# @lc code=end

