#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int direction[4][2]={0,1,0,-1,-1,0,1,0};

int dfs(int visited[20][20],int x1,int y1,int x2,int y2,char a[20][20]){
    if(x1==x2 && y1==y2)return 1;
    visited[x1][y1]=1;
    for(int i=0;i<4;i++){
        int nx=x1+direction[i][0];
        int ny=y1+direction[i][1];

        if(nx>-1 && nx<20 && ny>-1 && ny<20 && a[nx][ny]=='.'&& visited[nx][ny]==0){
            if(dfs(visited,nx,ny,x2,y2,a)){
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n,x1,x2,y1,y2,i,j,k;
    char a[20][20];

    scanf("%d",&n);                  //输入测例个数
    for(i=0;i<n;i++){
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);               //输入起点终点
        for(j=0;j<20;j++){
            scanf("%s",a[j]);                  //墙和路            
        }
    int visited[20][20]={0};
    if(dfs(visited,x1,y1,x2,y2,a)==1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    }



    system("pause");
    return 0;
}
