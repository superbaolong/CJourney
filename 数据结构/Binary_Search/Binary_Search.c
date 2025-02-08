//这是二分查找
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
    int m,n,i,min,max,mid,*a;
    a=(int*)malloc(sizeof(int)*n);
    printf("输入数组元素个数：");
    scanf("%d",&n);    //数组个数
    printf("输入数组元素:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("输入查找的值：");
    scanf("%d",&m);    //要查找的值
    min=0;
    max=n-1;
    mid=(min+max)/2;
    while(min<=max){
        if(a[mid]<m){
            min=mid+1;
            mid=(min+max)/2;
        }else if(a[mid]>m){
            max=mid-1;
            mid=(max+mid)/2;
        }else if(a[mid]==m){
            printf("查找到%d是a[%d]\n",m,mid);
            break;
        }
    }

    free(a);
    system("pause");
    return 0;
}
