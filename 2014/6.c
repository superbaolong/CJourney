#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

bool isSushu(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)return false;
    }
    return true;
}

int main() {
    int n;
    printf("请输入一个大于等于2的数:");
    scanf("%d",&n);  //10000>=n>=2
    if(isSushu(n)){
        printf("%d是素数\n",n);
    }else{
        printf("%d不是素数\n",n);
    }

    system("pause");
    return 0;
}
