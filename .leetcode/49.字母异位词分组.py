#
# @lc app=leetcode.cn id=49 lang=python
#
# [49] 字母异位词分组
#

# @lc code=start
class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        mp=defaultdict(list)
        for s in strs:
            key="".join(sorted(s))
            mp[key].append(s)

        return list(mp.values())

        
# @lc code=end

