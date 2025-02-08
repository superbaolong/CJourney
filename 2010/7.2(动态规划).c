#include <stdio.h>
#include <stdlib.h>

int max(int x, int y) {
    return (x > y) ? x : y;
}

// 计算最多能装入第一艘船的最大重量
int maxw(int c1, int *w, int n) {
    int dp[c1 + 1];  // dp[i] 表示容量 i 时能装的最大重量
    for (int i = 0; i <= c1; i++) {
        dp[i] = 0;  // 初始化 dp 数组
    }

    for (int j = 0; j < n; j++) {   // 遍历每个物品
        for (int i = c1; i >= w[j]; i--) {  // 逆序遍历防止重复使用
            dp[i] = max(dp[i], dp[i - w[j]] + w[j]);
        }
    }

    return dp[c1];  // 返回第一艘船能装的最大重量
}

int main() {
    int c1, c2, n;  // c1: 第一艘船载重量，c2: 第二艘船载重量，n: 货物数
    printf("请分别输入第一艘船载重量、第二艘船载重量、货物总数: ");
    scanf("%d %d %d", &c1, &c2, &n);

    int *w = (int *)malloc(sizeof(int) * n);  // 动态分配货物数组
    if (w == NULL) {
        printf("内存分配失败！\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("请输入第 %d 件货物的重量: ", i + 1);
        scanf("%d", &w[i]);
    }

    // 计算第一艘船最多能装多少
    int max_weight = maxw(c1, w, n);

    // 计算所有货物的总重量
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += w[i];
    }

    printf("箱子重量之和为: %d\n", sum);
    printf("第一艘船最多能装: %d\n", max_weight);
    printf("第二艘船还需要装: %d\n", sum - max_weight);

    // 判断是否能装入两艘船
    printf("能否全装两艘船上: ");
    if (sum - max_weight <= c2) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    free(w);  // 释放动态分配的内存
    system("pause");
    return 0;
}