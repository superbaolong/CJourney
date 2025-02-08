#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int direction[8][2]={2,1,1,2,2,-1,1,-2,-2,-1,-1,-2,-2,1,-1,2};
int bfs(int x1,int x2,int y1,int y2){
    int visited[200][200]={0};                       //标记走过的
    int queue_x[40000],queue_y[40000],queue_step[40000];       //定义每个节点的横纵坐标，到达需要的步数
    int front,rear,step=0;        //初始化
    front=0,rear=0;
    queue_x[0]=x1,queue_y[0]=y1,queue_step[0]=0;       //队头存起点（x1,x2）
    rear=1;
    visited[x1][y1]=1;
    while(front<rear){
        int x=queue_x[front];                          
        int y=queue_y[front];
        int step=queue_step[front];
        front++;

        if(x==x2 && y==y2)return step;             //返回步数
        for(int i=0;i<8;i++){
            int nx=x+direction[i][0];
            int ny=y+direction[i][1];
            if(nx>=0 && ny>=0 && nx<200 & ny<=200 && !visited[nx][ny]){
                queue_x[rear]=nx;
                queue_y[rear]=ny;
                queue_step[rear]=step+1;
                rear++;
                visited[nx][ny]=1;
            }
        }                       //遍历队头的八个相邻的节点存入队列
    }
}

int main() {
    int N;
    scanf("%d",&N);
    int x1,x2,y1,y2;
    
    for(int i=0;i<N;i++){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        int step=bfs(x1,x2,y1,y2);
        printf("%d\n",step);
    }

    system("pause");
    return 0;
}
