#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

//是质数
bool isZhishu(int x){
    //x>=5
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
} 
//是回文数
bool isHuiwen(int x){
    int num=0;  //表示x的位数
    int copy_x=x;
    while(copy_x!=0){
        copy_x=copy_x/10;
        num++;
    }
    int* a=malloc(sizeof(int)*(num+1));
    for(int i=num-1;i>=0;i--){
        a[i]=x%10;
        x=x/10;
    }
    for(int i=0;i<num/2;i++){
        if(a[i]!=a[num-i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    //题目说a>=5,就不用考虑1、2之类的了
    int a,b;
    printf("请输入两个数作为范围:");
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        if(isZhishu(i)){   //先判断是不是质数
            if(isHuiwen(i)){   //再判断是不是回文
                printf("%d\n",i); 
            }
        }
    }

    system("pause");
    return 0;
}