#
# @lc app=leetcode.cn id=76 lang=python
#
# [76] 最小覆盖子串
#

# @lc code=start
class Solution(object):
    def minWindow(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        s_len=len(s)
        t_len=len(t)
        ans=[]
        #记录t中字符出现的次数
        t_hash=[0]*256
        for i in range(t_len):
            t_hash[t[i]]+=1
        
        if s_len< t_len:
            return ans
            
        for i in range(t_len,s_len):   #第一轮选t长度的子串，看有没有包含t所有字符的
            for left in range(s_len-i+1):
                a=[]
                for j in range(left,left+i):
                    a.append(s[j])
                


        
# @lc code=end

