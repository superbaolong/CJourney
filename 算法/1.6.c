#include <stdio.h>
#include<stdlib.h>
#include <string.h>

void swap(char a[],int p,int q){
    char temp=a[p];
    a[p]=a[q];
    a[q]=temp;
}

void rank(char a[],int left,int right){
    if(left==right){
        for(int i=0;i<=right;i++){
            printf("%c",a[i]);
        }
        printf("\n");
    }else{
        for(int j=left;j<=right;j++){
            swap(a,left,j);
            rank(a,left+1,right);
            swap(a,left,j);
        }
    }
}



int main() {
    int n,left,right;
    char a[11]="abcdefghij";
    scanf("%d",&n);
    rank(a,0,n-1);


    system("pause");
    return 0;
}
