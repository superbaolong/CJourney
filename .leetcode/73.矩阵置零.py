#
# @lc app=leetcode.cn id=73 lang=python
#
# [73] 矩阵置零
#

# @lc code=start

import numpy as np

class Solution(object):
    def setZeroes(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        m=len(matrix)
        n=len(matrix[0])
        flag=np.zeros((m,n))
        for i in range(m):
            for j in range(n):
                if matrix[i][j]==0:
                    flag[i][j]=1

        for i in range(m):
            for j in range(n):
                if flag[i][j]==1 and matrix[i][j]==0:
                    #把这一行和一列元素都置0
                    for a in range(m):
                        matrix[a][j]=0
                    for a in range(n):
                        matrix[i][a]=0
                
        return matrix

# @lc code=end

