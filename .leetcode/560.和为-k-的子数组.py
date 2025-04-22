#
# @lc app=leetcode.cn id=560 lang=python
#
# [560] 和为 K 的子数组
#

# @lc code=start
class Solution(object):
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        n=len(nums)
        f_add={0:1}  #前缀和为0出现1次
        a=0
        result=0
        for i in range(n):
            a+=nums[i]
            if a-k in f_add:
                result+=f_add[a-k]
            if a in f_add:
                f_add[a]+=1
            else:
                f_add[a]=1
                
        return result

        
# @lc code=end

