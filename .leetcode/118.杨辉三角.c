/*
 * @lc app=leetcode.cn id=118 lang=c
 *
 * [118] 杨辉三角
 */

// @lc code=start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int** c = malloc(numRows * sizeof(int*));   
    *returnSize = numRows;       //行数
    *returnColumnSizes = malloc(numRows * sizeof(int));  // 一维数组returnColumnSizes存储每行个数
    for (int i = 0; i < numRows; i++) {
        (*returnColumnSizes)[i] = i + 1;
        c[i] = malloc((i + 1) * sizeof(int));      //第i行分配i+1个空间
        c[i][0] = c[i][i] = 1;
        for (int j = 1; j < i; j++) {
            // 左上方的数 + 正上方的数
            c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
        }
    }
    return c;
}
//不是自己写的，两个指针搞得头痛
// @lc code=end

