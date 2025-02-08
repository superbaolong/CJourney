#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int bushu=0;       //记录步数
int minbushu=10000;
int direction[4][2]={1,0,-1,0,0,1,0,-1};  //四个方向
int found=0;

void dfs(int x1,int y1,int x2,int y2,char migong[12][12],int visited[12][12]){
    if(found=1)return;
    if(x1==x2 && y1==y2){
        if(bushu<minbushu)minbushu=bushu;
        found=1;
        return;
    }
    visited[x1][y1]=1;
    for(int i=0;i<4;i++){
        int nx=x1+direction[i][0];
        int ny=y1+direction[i][1];

        if(nx<12 && nx>=0 && ny<12 &&ny>=0 && visited[nx][ny]==0 && migong[nx][ny]=='.'){
            bushu++;
            dfs(nx,ny,x2,y2,migong,visited);
            bushu--;
        }
    }    
    visited[x1][y1]=0;
}

int main() {
    int x1,y1,x2,y2;
    int visited[12][12]={0};
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    char migong[12][12];
    for(int i=0;i<12;i++){
        scanf("%s",migong[i]);
    }

    dfs(x1-1,y1-1,x2-1,y2-1,migong,visited);
    printf("%d",minbushu);

    system("pause");
    return 0;
}