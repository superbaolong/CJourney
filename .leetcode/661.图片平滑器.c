/*
 * @lc app=leetcode.cn id=661 lang=c
 *
 * [661] 图片平滑器
 */

// @lc code=start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** imageSmoother(int** img, int imgSize/*行数*/, int* imgColSize/*每行的列数*/, int* returnSize, int** returnColumnSizes) {
    int** ave;   //平均值
    *returnSize=imgSize;
    // // 先分配 returnColumnSizes 的空间
    // *returnColumnSizes = (int*)malloc(sizeof(int) * imgSize);
    for (int i = 0; i < imgSize; i++) {
        (*returnColumnSizes)[i] = imgColSize[i];
    }
    
}
// @lc code=end

