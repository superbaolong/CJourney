#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    int N;
    scanf("%d",&N);      
    int maze[N][N];    //N*N的迷宫
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&maze[i][j]);
        }
    }
    int x,y;   //人所在的横纵坐标
    scanf("%d%d",&x,&y);
    int direction;
    scanf("%d",&direction);
    //上面全都是输入，俺要开始操作啦
    if(direction==0){  //左边
        if(y-1>=0 && maze[x][y-1]==0){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }
    if(direction==1){  //下边
        if(x+1<N && maze[x+1][y]==0){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }
    if(direction==2){  //右边
        if(y+1<N && maze[x][y+1]==0){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }
    if(direction==3){  //上边
        if(x-1>=0 && maze[x-1][y]==0){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }

    system("pause");
    return 0;
}
