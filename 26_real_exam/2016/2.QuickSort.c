#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

void sort(int a[],int left,int right){  //快排
    
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

        sort(data,0,i);
        printf("\n");
    }

    system("pause");
    return 0;
}
