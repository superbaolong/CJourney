#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

void sort(int a[],int left,int right){  //快排
    int temp;
    int i=left,j=right;
    if(left>=right)return;  //数组元素要大于等于两个

    int key=a[left];
    while(i<j){
        while(i<j && a[j]>=key){
            j--;;
        }
        if(a[j]<key){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        while(i<j && a[i]<=key){
            i++;
        }
        if(a[i]>key){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    sort(a,0,i-1);
    sort(a,i+1,right);
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

        int len=i;
        sort(data,0,i-1);
        for(i=0;i<len;i++){
            printf("%d ",data[i]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
