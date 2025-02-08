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
    int a,b;
    scanf("%d%d",&a,&b);   //b>=a>=1
    for(int i=a;i<=b;i++){
        if(isSushu(i)){
            printf("%d\n",i);
        }
    }

    system("pause");
    return 0;
}
