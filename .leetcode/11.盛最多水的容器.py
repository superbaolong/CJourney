#
# @lc app=leetcode.cn id=11 lang=python
#
# [11] 盛最多水的容器
#

# @lc code=start
class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        n=len(height)
        left=0
        right=n-1
        max=0
        
        while(left<right):
            current=min(height[left],height[right])*(right-left)
            if(current>max):
                max=current
            if(height[left]<height[right]):
                left=left+1
            else:
                right=right-1

        return max
# @lc code=end

