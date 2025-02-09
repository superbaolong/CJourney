#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * @lc app=leetcode.cn id=67 lang=c
 *
 * [67] 二进制求和
 */

// @lc code=start
int max(int a, int b) {
    return (a > b) ? a : b;
}

int mi(int len, int i) {
    int num = 1;
    for (int j = 0; j < len - i - 1; j++) {
        num = num * 2;
    }
    return num;
}

char* addBinary(char* a, char* b) {
    int a_len = strlen(a);
    int b_len = strlen(b);
    int c_len = max(a_len, b_len) + 1; // 结果最大长度

    // 使用 malloc 分配内存
    int *A = (int *)malloc(a_len * sizeof(int));
    int *B = (int *)malloc(b_len * sizeof(int));
    int C[c_len];

    int num_a = 0, num_b = 0, num_c = 0;

    // 把数组 a 和 b 转换成整数存储到 A 和 B 数组中
    for (int i = 0; i < a_len; i++) {
        A[i] = (a[i] == '1') ? 1 : 0;
    }
    for (int i = 0; i < b_len; i++) {
        B[i] = (b[i] == '1') ? 1 : 0;
    }

    // 将二进制转换为十进制数
    for (int i = 0; i < a_len; i++) {
        num_a += A[i] * mi(a_len, i); // 2 的 a_len-i-1 次方
    }
    for (int i = 0; i < b_len; i++) {
        num_b += B[i] * mi(b_len, i);
    }

    // 相加
    num_c = num_a + num_b;

    // 将结果转换成二进制形式存储到 C 数组中
    for (int i = c_len - 1; i >= 0; i--) {
        C[i] = num_c % 2;
        num_c = num_c / 2;
    }

    // 去掉前导的 0
    while (C[0] == 0 && c_len > 1) { // 注意此处添加了 `c_len > 1` 防止 c_len 变为 0
        for (int i = 0; i < c_len - 1; i++) {
            C[i] = C[i + 1];
        }
        c_len -= 1;
    }

    // 分配内存存储最终的字符串结果
    char *s = (char *)malloc(c_len * sizeof(char));  

    // 将二进制数组转换成字符数组
    for (int i = 0; i < c_len; i++) {
        s[i] = (C[i] == 1) ? '1' : '0';
    }


    free(A);
    free(B);


    return s;
}
// @lc code=end

