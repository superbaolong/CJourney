/*
 * @lc app=leetcode.cn id=119 lang=c
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    *returnSize=rowIndex+1;
    int n=rowIndex+1;
    int* a=malloc(n*sizeof(int));  //分配a[n]大小的数组
    for(int i=0;i<n;i++){
        a[i]=1;
        for(int j=i-1;j>=1;j--){
            a[j]=a[j]+a[j-1];      //这一行太强了，再看看
        }
    }

    return a;
}
// @lc code=end

