/*
 * @lc app=leetcode.cn id=643 lang=c
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
#include <limits.h>

double findMaxAverage(int* nums, int numsSize, int k) {
    // 计算第一个窗口的和
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }

    double max_average = (double)sum / k;

    // 滑动窗口：每次去掉左边一个元素，加上右边一个元素
    for (int i = k; i < numsSize; i++) {
        sum = sum - nums[i - k] + nums[i];
        double average = (double)sum / k;
        if (average > max_average) {
            max_average = average;
        }
    }

    return max_average;
}

// @lc code=end

