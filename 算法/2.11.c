#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int n,r,m;            //n顶点，r边，m种颜色,问有几种着色法
int way=0;            //着色方法
int graph[20][20]={0};    //邻接矩阵存图
int color[20]={0};

int isvalid(int c,int v){
    for(int i=0;i<n;i++){
        if(graph[i][v]==1 && color[i]==c){
            return 0;
        }
    }
    return 1;
}

void solve(int v){
    if(v==n){
        way++;
        return;
    }
    for(int c=1;c<=m;c++){
        if(isvalid(c,v)){
            color[v]=c;   //涂成颜色c
            solve(v+1);
            color[v]=0;
        }
    }
}

int main() {
    int i,j;
    scanf("%d%d%d",&n,&r,&m);  

    for(i=0;i<r;i++){
        int u,v;
        scanf("%d%d",&u,&v);
        graph[u][v]=1;
        graph[v][u]=1;
    }                           //边

    solve(0);
    printf("%d",way);
    

    system("pause");
    return 0;
}