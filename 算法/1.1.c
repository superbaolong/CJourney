#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int halfsearch(int a[],int low,int high,int k){
    while(low <= high){
        int mid = (low+high)/2;
        if(a[mid]==k){
            return 1;
        }else if(a[mid]<k){
            low = mid+1;
        }else if(a[mid]>k){
            high = mid-1;
        }
    }
    return 0;
}

int main() {
    int m,n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);                  //输入递增序列
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&k);
        int low=0,high=n-1;
        if(halfsearch(a,low,high,k)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    system("pause");
    return 0;
}
