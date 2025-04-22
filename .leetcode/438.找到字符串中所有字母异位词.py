#
# @lc app=leetcode.cn id=438 lang=python
#
# [438] 找到字符串中所有字母异位词
#

# @lc code=start
class Solution(object):
    def findAnagrams(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """
        p_len=len(p)
        s_len=len(s)
        result=[]
        p_hash=[0]*256   #哈希表
        s_hash=[0]*256
        if p_len>s_len:
            return result

        for i in range(p_len):  #记录字符串p中每个字符的个数
            p_hash[ord(p[i])]+=1
        
        for i in range(p_len):  #记录字符串s中前p_len中字符的个数
            s_hash[ord(s[i])]+=1

        for left in range(s_len-p_len+1):
            right=left+p_len
            if s_hash==p_hash:
                result.append(left)
            if right<s_len:
                s_hash[ord(s[right])]+=1
                s_hash[ord(s[left])]-=1

        return result

# @lc code=end

