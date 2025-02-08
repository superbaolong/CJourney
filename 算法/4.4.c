#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // 用于 INT_MAX

int main() {
    int n;
    scanf("%d", &n);
    int p[n + 1];
    int dp[n][n]; // 动态规划表

    // 输入矩阵的行列数
    for (int i = 0; i < n; i++) {
        int row, col;
        scanf("%d %d", &row, &col);
        p[i] = row;         // 第i个矩阵的行
        p[i + 1] = col;     // 第i个矩阵的列
    }

    // 初始化动态规划表
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                dp[i][j] = 0; // 单个矩阵的代价为0
            } else {
                dp[i][j] = INT_MAX; // 其他初始化为无穷大
            }
        }
    }

    // 动态规划计算,矩阵dp[i][j]是子链A【i】到A[j]的代价
    for (int len = 2; len <= n; len++) { // 子链长度从2开始
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1; // 子链结束位置
            for (int k = i; k < j; k++) {
                // 计算分割点k的代价
                int cost = dp[i][k] + dp[k + 1][j] + p[i] * p[k + 1] * p[j + 1];
                if (cost < dp[i][j]) {
                    dp[i][j] = cost;
                }
            }
        }
    }

    // 输出最小代价
    printf("%d\n", dp[0][n - 1]);

    system("pause");
    return 0;
}
