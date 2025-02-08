#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

bool isSushu(int x){
    if(x==2){
        return true;
    }else{
        for(int i=2;i <= sqrt(x);i++){
            if(x%i==0)return false;
        }
        return true;
    }
}

int main() {
    int a,b;   //题目说了a>=2
    printf("输入a和b的值:");
    scanf("%d %d",&a,&b);
    int *sushu = (int *)malloc((b - a + 1) * sizeof(int));
    int num=0,j=0;
    for(int i=a;i<=b;i++){
        if(isSushu(i)){
            num++;
            sushu[j++]=i;
        }
    }
    for(int i=0;i<num;i++){
        printf("%d ",sushu[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}
