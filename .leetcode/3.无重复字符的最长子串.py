#
# @lc app=leetcode.cn id=3 lang=python
#
# [3] 无重复字符的最长子串
#

# @lc code=start
class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        n=len(s)
        if n<=1:
            return n
            
        max_len=1
        for left in range(n):
            ha=[0]*1000
            ha[ord(s[left])]+=1
            right=left+1
            while right<n and ha[ord(s[right])]==0:
                ha[ord(s[right])]+=1  
                right+=1

            max_len=max(max_len,right-left)

        return max_len
        
# @lc code=end

