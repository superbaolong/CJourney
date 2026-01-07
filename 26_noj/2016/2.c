#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

void sort(int a[],int len){  //冒泡
    int judge=1;   //判断该次循环有没有交换元素
    while(judge){
        judge=0;
        for(int i=0;i<len;i++){
            if(i<len-1 && a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                judge=1;
            }
        }
    }
    for(int i=0;i<len;i++){
        printf("%d ",a[i]);
    }
}

int main() {
    printf("请输入行数n：");
    int n;
    char ch;
    scanf("%d",&n);
    while(n--){
        int data[100];
        int i=0;
        do{
            scanf("%d",&data[i++]);
        }
        while((ch=getchar())!='\n');

        sort(data,i);
    }

    system("pause");
    return 0;
}
