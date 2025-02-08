#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int direction[4][2]={{0,1},{1,0},{0,-1},{-1,0}}; //上右下左
int max_length=0;    //记录最长能滑多长

int dfs(int** h,int** dp,int row,int col,int x,int y){
    if(dp[x][y]!=-1){   //已经记录过该点的最长路径，直接返回
        return dp[x][y];
    }
    int length=1;
    //遍历四个方向
    for(int i=0;i<4;i++){
        int nx=x+direction[i][0];
        int ny=y+direction[i][1];
        if (nx >= 0 && nx < row && ny >= 0 && ny < col && h[nx][ny] < h[x][y]) {
            // 递归搜索相邻点，更新长度
            int next_length = dfs(h, dp, row, col, nx, ny) + 1;
            if (next_length > length) {
                length = next_length;
            }
        }
    }
    dp[x][y]=length;
    if (length > max_length) {
        max_length = length;
    }

    return length;
}

int main() {
    int row,col;  //行数和列数
    scanf("%d%d",&row,&col);
    int** h=malloc(row * sizeof(int*));
    for(int i=0;i<row;i++){
        h[i] = (int*)malloc(col * sizeof(int));
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&h[i][j]);  //依次输入滑雪场每个坐标的高度
        }
    }

    // 动态规划数组，初始化为 -1
    int** dp = (int**)malloc(row * sizeof(int*));
    for (int i = 0; i < row; i++) {
        dp[i] = (int*)malloc(col * sizeof(int));
        memset(dp[i], -1, col * sizeof(int));
    }

    // 从每个点出发计算最长滑雪路径
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            dfs(h, dp, row, col, i, j);
        }
    }

    // 输出最长滑雪路径长度
    printf("%d\n", max_length);

    system("pause");
    return 0;
}