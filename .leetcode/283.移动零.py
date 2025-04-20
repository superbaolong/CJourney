#
# @lc app=leetcode.cn id=283 lang=python
#
# [283] 移动零
#

# @lc code=start
class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        a=0  #记录0的个数
        for i in range(0,len(nums)):
            if(nums[i]==0):
                a=a+1
        
        left=0
        for i in range(0,len(nums)):
            if(nums[i]!=0):
                nums[left]=nums[i]
                left=left+1

        for i in range(left,len(nums)):
            nums[i]=0
        
# @lc code=end

