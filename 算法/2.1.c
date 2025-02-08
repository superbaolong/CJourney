#include <stdio.h>
#include <stdlib.h>

int max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int n, c;

    while (1) {
        scanf("%d%d", &n, &c);
        if (n == 0 && c == 0) break;  // 终止条件

        int w[n], p[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &w[i]);  // 读取物品重量
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &p[i]);  // 读取物品价值
        }

        // 定义 DP 数组
        int dp[n + 1][c + 1];

        // 初始化 DP 数组
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= c; j++) {
                dp[i][j] = 0;
            }
        }

        // 动态规划求解 0/1 背包问题
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= c; j++) {
                if (w[i - 1] > j) {  
                    // 如果当前物品的重量大于背包容量，不能装入
                    dp[i][j] = dp[i - 1][j];
                } else {
                    // 装或者不装，取最大值
                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + p[i - 1]);
                }
            }
        }

        printf("%d\n", dp[n][c]);  // 输出背包能装的最大价值
    }
    system("pause");
    return 0;
}

















// #include <stdio.h>
// #include<stdlib.h>
// #include <string.h>

// int max_value=0;

// void best(int n,int c,int weight,int value,int w[],int p[],int i){
//     if(weight>c)return;
//     if(value>max_value)max_value=value;
//     if(i==n)return;
//     best(n,c,weight+w[i],value+p[i],w,p,i+1);
//     best(n,c,weight,value,w,p,i+1);
// }

// int main() {
    // int n,c,i;
    // scanf("%d%d",&n,&c);             //背包数量和总承受重量
    // while(n!=0 || c!=0){
    //     int w[n],p[n];
    //     for(i=0;i<n;i++){
    //         scanf("%d",&w[i]);       //每个背包重量
    //     }
    //     for(i=0;i<n;i++){
    //         scanf("%d",&p[i]);       //每个背包价值
    //     }
//         max_value=0;
//         best(n,c,0,0,w,p,0); 
//         printf("%d\n",max_value);              //输出能装的最大价值
//         scanf("%d%d",&n,&c);
//         if(n==0&&c==0)break;
//     }
    

//     system("pause");
//     return 0;
// }
