#include <stdio.h>
#include <stdlib.h>

// 计算从起点到终点的路径数
long long countPaths(int x1, int y1, int x2, int y2) {
    // 如果终点的x或y小于起点，返回0（因为只能向右和向上移动）
    if (x2 < x1 || y2 < y1) {
        return 0;
    }
    
    // 计算网格大小
    int width = x2 - x1 + 1;
    int height = y2 - y1 + 1;
    
    // 创建动态规划数组
    long long dp[100][100] = {0};
    
    // 初始化第一行和第一列
    dp[0][0] = 1;
    for (int i = 1; i < width; i++) {
        dp[i][0] = 1;
    }
    for (int j = 1; j < height; j++) {
        dp[0][j] = 1;
    }
    
    // 填充动态规划数组
    for (int i = 1; i < width; i++) {
        for (int j = 1; j < height; j++) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    
    return dp[width-1][height-1];
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    
    while (1) {
        // 读取三个点的坐标
        scanf("%d %d %d", &x1, &y1, &x2);
        scanf("%d %d %d", &y2, &x3, &y3);
        scanf("%d %d %d", &x3, &y3, &x3);
        
        // 读取结束标志行
        int zero1, zero2, zero3;
        scanf("%d %d %d", &zero1, &zero2, &zero3);
        
        // 检查是否到达输入结束
        if (zero1 == 0 && zero2 == 0 && zero3 == 0) {
            break;
        }
        
        // 计算三段路径的数量
        printf("%lld\n", countPaths(x1, y1, x2, y2));
        if (x2 == y2) {
            printf("0\n");  // 如果点重合，路径数为0
        } else {
            printf("%lld\n", countPaths(x2, y2, x3, y3));
        }
        printf("%lld\n", countPaths(x3, y3, x3, y3));
    }
    
    return 0;
} 