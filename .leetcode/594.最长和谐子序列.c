/*
 * @lc app=leetcode.cn id=594 lang=c
 *
 * [594] 最长和谐子序列
 */

// @lc code=start
int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int findLHS(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    // 先排序
    qsort(nums, numsSize, sizeof(int), cmp);

    int max_length = 0;
    int left = 0;  // 指向起始位置

    // 遍历数组
    for (int right = 0; right < numsSize; right++) {
        // 让 left 指向比 nums[right] 小 1 的最左侧位置
        while (nums[right] - nums[left] > 1) {
            left++;
        }

        // 如果当前窗口是和谐子序列
        if (nums[right] - nums[left] == 1) {
            max_length = (max_length > (right - left + 1)) ? max_length : (right - left + 1);
        }
    }

    return max_length;
}

// @lc code=end

