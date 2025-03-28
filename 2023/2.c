#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

bool is_YinShu(int a,int b){   //判断a是b的因数
    return(b%a==0)?true:false;
}
int min_(int a,int b){  //最小值
    return(a<b)?a:b;
}

int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    int min=min_(m,n);
    int max=0;
    for(int i=1;i<=min;i++){
        if(is_YinShu(i,m) && is_YinShu(i,n))max=i;
    }
    printf("%d\n",max);

    system("pause");
    return 0;
}
