/*
 * @lc app=leetcode.cn id=441 lang=c
 *
 * [441] 排列硬币
 */

// @lc code=start
int arrangeCoins(int n) {
    int row=1;    //row行
    while(n>0){
        n=n-row;
        row++;
    }
    return (n==0)?row-1:row-2;
}
// @lc code=end