/*
 * @lc app=leetcode.cn id=628 lang=c
 *
 * [628] 三个数的最大乘积
 */

// @lc code=start
int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b); // 升序排列
}
int max(int x,int y){
    return(x>y)?x:y;
}

int maximumProduct(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int max1=nums[numsSize-1]*nums[numsSize-2]*nums[numsSize-3];
    int max2=nums[0]*nums[1]*nums[numsSize-1];
    return max(max1,max2);
}
// @lc code=end

