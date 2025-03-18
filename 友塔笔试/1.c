#include <stdio.h>
#include<stdlib.h>

int main() {
    int n,m;
    int sum=0;   //一共撞到sum个船
    scanf("%d %d",&n,&m);
    int cao[n][2];   //曹操的船队
    int huang[m];    //黄盖的船队
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&cao[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        scanf("%d",&huang[i]);
    }
    //以上是输入

    int deleted[1000]={0};
    //把连起来的船放在同一行w
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i)continue;
            if(cao[i][1]>=cao[j][0] && deleted[i]==0 && deleted[j]==0){
                if(cao[i][1]<=cao[j][1]){
                    cao[i][1]=cao[j][1];
                    if(cao[i][0]>cao[j][0]){
                        cao[i][0]=cao[j][0];
                    }
                    deleted[j]=1;     //把j行删除
                }
            }
        }
    }
    //判断黄盖的船撞到哪个船队了
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(huang[i]>=cao[j][0] && huang[i]<=cao[j][1] && !deleted[j]){
                sum+=cao[j][1]-cao[j][0];
                deleted[j]=1;
            }
        }
    }
    printf("%d",sum);
    
    system("pause");
    return 0;
}