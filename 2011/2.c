#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    printf("请决定要输出几行的杨辉三角：");
    int k;   //要输出k行的杨辉三角
    scanf("%d",&k);
    int triangle[k][k];
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if(j==0 || i==j){
                triangle[i][j]=1;
            }else{
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }
    }
    for(int i=0;i<k;i++){
        //先输出k-i-1个空格
        for(int j=0;j<k-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<i+1;j++){
            printf("%d ",triangle[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
