#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    int n;
    printf("请输入一个不大于10000的正整数:");
    scanf("%d",&n);     //n<=10000
    int binary[20]={0};
    int bit=0;  //记录有多少位
    while(n!=0){
        binary[bit++]=n%2;
        n=n/2;
    }
    for(int i=bit-1;i>=0;i--){
        printf("%d",binary[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}
