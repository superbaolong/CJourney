#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>

int direcation[4][2]={{-1,0},{1,0},{0,1},{0,-1}};

bool dfs(int m,int n,int x,int y,int end_x,int end_y,int a[20][20],bool visited[20][20]){
    if (x == end_x && y == end_y) {
        return true;
    }
    int i;
    visited[x][y] = true;
    for(i=0;i<4;i++){
        int new_x=x+direcation[i][0];
        int new_y=y+direcation[i][1];
        if(new_x>=0 &&new_y>=0 && new_y<n && new_x<m &&a[new_x][new_y]==0 && !visited[new_x][new_y]){
            if(dfs(m,n,new_x,new_y,end_x,end_y,a,visited)){
                return true;
            }
            
        }
    }
    return false;

}

int main() {
    int i,j,m,n,x,y,end_x,end_y;
    scanf("%d%d",&m,&n);
    scanf("%d%d",&x,&y);
    scanf("%d%d",&end_x,&end_y);
    int a[20][20];
    bool visited[20][20]={false};                  //记录访问过的点
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    if(dfs(m,n,x,y,end_x,end_y,a,visited)){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    system("pause");
    return 0;
}
