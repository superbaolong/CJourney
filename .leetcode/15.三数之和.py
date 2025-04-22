#
# @lc app=leetcode.cn id=15 lang=python
#
# [15] 三数之和
#

# @lc code=start
class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        a=[]
        nums=sorted(nums)
        for i in range(len(nums)-2):
            if i>0 and nums[i]==nums[i-1]:
                continue
            else:
                j=i+1
                k=len(nums)-1
                target=-nums[i] 
                while j<k:   
                    if nums[j] + nums[k] == target:
                        a.append([nums[i], nums[j], nums[k]])
                        # 跳过重复的 nums[j] 和 nums[k]
                        while j < k and nums[j] == nums[j+1]:
                            j += 1
                        while j < k and nums[k] == nums[k-1]:
                            k -= 1
                        j += 1
                        k -= 1
                    elif nums[j]+nums[k]>target:
                        k-=1
                    else:
                        j+=1
        return a
# @lc code=end

