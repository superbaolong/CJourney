/*
 * @lc app=leetcode.cn id=674 lang=c
 *
 * [674] 最长连续递增序列
 */

// @lc code=start
int findLengthOfLCIS(int* nums, int numsSize) {
    if (numsSize == 0) return 0;  // 边界情况，空数组返回 0

    int maxLen = 1;  // 记录最长连续递增子序列的长度
    int curLen = 1;  // 当前递增序列的长度

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > nums[i - 1]) {
            curLen++;  // 继续递增
        } else {
            curLen = 1;  // 递增中断，重新计算长度
        }
        if (curLen > maxLen) {
            maxLen = curLen;  // 更新最长长度
        }
    }
    return maxLen;
}

// @lc code=end