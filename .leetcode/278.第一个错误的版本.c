/*
 * @lc app=leetcode.cn id=278 lang=c
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

//二分查找
int firstBadVersion(int n) {
    int left = 1;
    int right = n;

    while (left < right) {
        int mid = left + (right - left) / 2; // 避免直接加法可能导致的整数溢出
        if (isBadVersion(mid)) {
            right = mid; // 如果 mid 是坏版本，搜索区间缩小到 [left, mid]
        } else {
            left = mid + 1; // 如果 mid 不是坏版本，搜索区间缩小到 [mid + 1, right]
        }
    }

    return left; // 此时 left 和 right 指向第一个坏版本
}

// @lc code=end

