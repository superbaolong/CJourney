#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    int n; 
    int time[100][2];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&time[i][0],&time[i][1]); //分别是提出的时间和需要的时间
    }
    int sum[100];  //每个顾客得到包子的时间
    for(int i=0;i<n;i++){
        sum[i]=time[i][0]+time[i][1];
    }
    //以上是输入
    for(int i=0;i<n;i++){
        int min=10000;
        int k=0;
        for(int j=0;j<n;j++){
            if(sum[j]<min){
                min=sum[j];
                k=j;
            }
        }
        sum[k]=10000;
        printf("%d\n",k+1);  //遍历一次输出一次最小的
    }


    system("pause");
    return 0;
}
