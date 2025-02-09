/*
 * @lc app=leetcode.cn id=504 lang=c
 *
 * [504] 七进制数
 */

// @lc code=start
int jueduizhi(int x) {
    return (x < 0) ? -x : x;
}

/**
 * @brief 将整数转换为七进制字符串
 */
char* convertToBase7(int num) {
    // 分配足够大的空间，int 的七进制最多有 12 位（包含负号和结束符）
    char* result = (char*)malloc(12 * sizeof(char));

    if (num == 0) { // 特殊情况处理
        result[0] = '0';
        result[1] = '\0';
        return result;
    }

    int isNegative = (num < 0); // 记录负号
    int copy_num = jueduizhi(num);
    int i = 0;

    while (copy_num != 0) {
        result[i++] = (copy_num % 7) + '0';
        copy_num /= 7;
    }

    if (isNegative) {
        result[i++] = '-'; // 负数加负号
    }

    result[i] = '\0'; // 结束符

    // 反转字符串
    int left = 0, right = i - 1;
    while (left < right) {
        char temp = result[left];
        result[left++] = result[right];
        result[right--] = temp;
    }

    return result;
}
// @lc code=end

