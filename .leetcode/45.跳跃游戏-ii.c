/*
 * @lc app=leetcode.cn id=45 lang=c
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
int jump(int* nums, int numsSize) {
    if (numsSize <= 1) return 0; // 如果数组大小为 1，直接返回 0
    int min_steps = 0;          // 记录最小步数
    int left_area = 0;          // 当前跳跃覆盖范围的左边界
    int right_area = 0;         // 当前跳跃覆盖范围的右边界
    int farthest = 0;           // 记录最远可到达位置

    while (right_area < numsSize - 1) { // 当右边界未覆盖终点时
        min_steps++; // 增加一步
        for (int i = left_area; i <= right_area; i++) {
            farthest = (i + nums[i] > farthest) ? i + nums[i] : farthest;
        }
        if (farthest <= right_area) return -1; // 无法扩展范围，返回 -1 表示无法到达终点
        left_area = right_area + 1; // 更新左边界
        right_area = farthest;      // 更新右边界
    }
    return min_steps;
}
// @lc code=end