#
# @lc app=leetcode.cn id=128 lang=python
#
# [128] 最长连续序列
#

# @lc code=start
class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums=sorted(set(nums))
        max=1
        current=1
        nums_len=len(nums)
        if(len(nums)==0):
            return 0
        for i in range(1,nums_len):
            if(i<=nums_len-1 and nums[i]==nums[i-1]+1):
                current=current+1
                if(current>max):
                    max=current
            else:
                current=1
                if(current>max):
                    max=current
        return max
# @lc code=end

