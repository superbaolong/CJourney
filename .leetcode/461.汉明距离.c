/*
 * @lc app=leetcode.cn id=461 lang=c
 *
 * [461] 汉明距离
 */

// @lc code=start
int hammingDistance(int x, int y) {
    int num=0;
    while(x!=0 || y!=0){
        if((x%2)!=(y%2))num++;
        x=x/2;
        y=y/2;
    }
    return num;
}
// @lc code=end

