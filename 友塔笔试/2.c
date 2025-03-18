#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool canChu(int x){
    return (x%8==0);
}

int main() {
    int n;
    scanf("%d",&n); //一共n个数
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //以上是输入
    //一千可以整除8


    system("pause");
    return 0;
}
