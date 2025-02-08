#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

typedef struct{
    int row;    //行号
    int data; 
}max;

int main() {
    while(1){
        int n;
        scanf("%d",&n);    //n阶方阵
        if(n==0)break;
        int** matrix=malloc(sizeof(int *)*n);
        for(int i=0;i<n;i++){
            matrix[i]=malloc(sizeof(int)*n);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&matrix[i][j]);
            }
        }
        //以上全是输入
        //以下开始操作
        for(int j=0;j<n;j++){   //一列一列地操作
            max a;
            a.data=0;
            for(int i=j;i<n;i++){//这个for是用来找第j列中最大的数的行号的
                if(matrix[i][j]>a.data){
                    a.data=matrix[i][j];
                    a.row=i;
                }
            }
            //然后交换两行
            int* temp;
            temp=matrix[j];
            matrix[j]=matrix[a.row];
            matrix[a.row]=temp;
        }
        //把调整好的矩阵输出
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",matrix[i][j]);
                if(j==n-1)printf("\n");   //每行最后一个输出个换行
            }
        }
    }

    system("pause");
    return 0;
}