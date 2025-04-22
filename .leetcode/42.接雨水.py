#
# @lc app=leetcode.cn id=42 lang=python
#
# [42] 接雨水
#

# @lc code=start
class Solution(object):
    def trap(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        n=len(height)
        sum=0  #总共的雨水
        left=[0]*n   #某一列左边最高的（包括这一列）
        left[0]=height[0]

        right=[0]*n
        right[n-1]=height[n-1]#某一列右边最高的（包括这一列）
        
        max=0
        if n<=2:
            return 0
        for i in range(1,n):      #这个循环把left数组算完
            if(height[i]>left[i-1]):
                left[i]=height[i]
            else:
                left[i]=left[i-1]
         
        for i in range(n-2,-1,-1):     #这个循环把right数组算完
            if(height[i]>right[i+1]):
                right[i]=height[i]
            else:
                right[i]=right[i+1]
        
        for i in range(1,n-1):    ##这个循环算每一列能接的雨水
            if(min(left[i-1],right[i+1]) > height[i]):
                sum+=min(left[i-1],right[i+1]) - height[i]
        
        return sum

        
# @lc code=end

