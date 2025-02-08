#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    while(1){
        int hash[30]={0};   //题目说多项式次数不超过20
        int m;      //第一个多项式有m项
        scanf("%d",&m);
        int n;    ////第二个多项式有n项
        scanf("%d",&n);
        if(m==0 && n==0)break;

        int a[2*m];    //每一项第一个数是系数，第二个数是次数
        for(int i=0;i<2*m;i++){
            scanf("%d",&a[i]);
            if(i%2==1){
                hash[a[i]]+=a[i-1];
            }
        }

        int b[2*n];
        for(int i=0;i<2*n;i++){
            scanf("%d",&b[i]);
            if(i%2==1){
                hash[b[i]]+=b[i-1];
            }
        }

        for(int i=25;i>=0;i--){
            if(hash[i]!=0){
                printf("%d %d ",hash[i],i);
            }
        }
    }

    system("pause");
    return 0;
}
