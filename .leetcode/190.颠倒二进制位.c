#include<stdio.h>
#include<stdint.h>
/*
 * @lc app=leetcode.cn id=190 lang=c
 *
 * [190] 颠倒二进制位
 */

// @lc code=start

//可以优化成位运算
uint32_t mi(int x, int y) {
    uint32_t num = 1;
    for (int i = 0; i < y; i++) {
        num *= x;
    }
    return num;
}

uint32_t reverseBits(uint32_t n) {
    int num = 0, i = 0;  // 记录位数
    uint32_t temp = n;
    int a[32];

    // 将 n 转换为二进制表示
    while (temp != 0) {
        a[i] = temp % 2;
        temp = temp / 2;
        num++;
        i++;
    }

    // 补齐 32 位
    for (; i < 32; i++) {
        a[i] = 0;
    }

    // 计算颠倒后的结果
    uint32_t reverse = 0; // 使用无符号整数存储结果
    for (int i = 0; i < 32; i++) {
        reverse += a[i] * (uint32_t)mi(2, 32 - i - 1);
    }

    return reverse;
}
// @lc code=end

