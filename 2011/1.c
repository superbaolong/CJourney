#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

//找出不大于n的最大斐波拉契数
int max_n(int n,int f[100]){
    int max=0;
    for(int i=0;i<100;i++){
        if(f[i]>n)break;
        max=f[i];
    }
    return max;
}

//用斐波拉契数来表示任何正整数
int main() {
    int f[100];  //斐波
    f[0]=1;
    f[1]=1;
    for(int i=2;i<100;i++){
        f[i]=f[i-1]+f[i-2];
    }
    printf("输入你要表示的正整数:");
    int n;
    scanf("%d",&n);
    while(n!=0){
        int a=max_n(n,f);
        printf("%d",a);
        n-=max_n(n,f);
        if(n!=0)printf("+");
    }
    printf("\n");

    system("pause");
    return 0;
}
