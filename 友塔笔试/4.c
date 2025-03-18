#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>

int max_value=0;
int current_value=0;

void name(int a[11][11],int geted[11][11],int* i,int* j,int* n,int* m){
    if(*j<m){
        (*j)++;
        name(a,geted,i,j,n,m);
    }else if((*j)==*m && (*i)<(*n)-1){
        (*j)=0;
        (*i)++;
        name(a,geted,i,j,n,m);
    }
}

int main() {
    int n,m;  //n行m列
    scanf("%d %d",&n,&m);
    int a[11][11];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int geted[11][11]={0};
    int i=0,j=0;
    name(a,geted,&i,&j,&n,&m);

    system("pause");
    return 0;
}