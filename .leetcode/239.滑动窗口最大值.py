#
# @lc app=leetcode.cn id=239 lang=python
#
# [239] 滑动窗口最大值
#

# @lc code=start
class Solution(object):
    def maxSlidingWindow(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        n=len(nums)
        a=[]
        for i in range(k):
            a.append(nums[i])
        b=[]
        left=0
        while left<n-k:
            b.append(max(a))
            a[left]=-100000
            a.append(nums[left+k])
            left+=1

        a=[]
        for i in range(n-k,n):
            a.append(nums[i])
        b.append(max(a))

        return b

# @lc code=end

