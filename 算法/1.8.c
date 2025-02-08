#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int min(int a[],int i,int n){
    int b=a[i];
    int c=i;
    for(int j=i;j<n;j++){
        if(b>a[j]){b=a[j];
        c=j;     }
    }
    return c;
}

void arr(int a[],int n,int k){
    for(int i=0;i<k;i++){
        int d=min(a,i,n);
        int temp=a[i];
        a[i]=a[d];
        a[d]=temp;
    }
}

int main() {
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    arr(a,n,k);

    printf("%d",a[k-1]);


    system("pause");
    return 0;
}
