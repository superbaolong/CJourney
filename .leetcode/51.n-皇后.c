/*
 * @lc app=leetcode.cn id=51 lang=c
 *
 * [51] N 皇后
 */

// @lc code=start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
char*** solveNQueens(int n, int* returnSize/*解的个数*/, int** returnColumnSizes) {
    char*** result=malloc(sizeof(char**)*1000);  //解的数量应该不超过一千
    for(int i=0;i<1000;i++){
        result[i] = (char**)malloc(sizeof(char*) * n); 
        for(int j=0;j<n;j++){
            result[i][j]=malloc(sizeof(char)*(n+1));
            memset(result[i][j], '.', n);  // 初始化为 `.`，表示棋盘空位
        }
    }
}
// @lc code=end

