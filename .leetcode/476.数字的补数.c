/*
 * @lc app=leetcode.cn id=476 lang=c
 *
 * [476] 数字的补数
 */

// @lc code=start
int findComplement(int num) {
    int x = 0;      // 记录 num 的二进制位数
    int temp = num;
    while (temp != 0) {
        temp = temp / 2;
        x++;
    }

    int result = 0;
    for (int i = 0; i < x; i++) {
        // 取 num 的第 i 位（从右到左），并取反
        int bit = (num >> i) & 1;  // 获取第 i 位
        bit = 1 - bit;             // 取反
        result += bit * (1 << i);  // 将取反后的位加到结果中
    }

    return result;
}
// @lc code=end