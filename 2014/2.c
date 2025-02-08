#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int abs(int x){
    return (x>=0)?x:-x;
}

int main() {
    int n;
    scanf("%d",&n);    //一共n组坐标
    int a[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    if(n==1){
        int step=0;
        step+=2*abs(a[0][0])+2*abs(a[0][1]);
        printf("%d\n",step);
    }else{
        int step=0;  //记录步数
        step+=abs(a[0][0])+abs(a[0][1]);
        for(int i=1;i<n-1;i++){
            step+=abs(a[i][0]-a[i-1][0])+abs(a[i][1]-a[i-1][1]);
        }
        step+=abs(a[n-1][0]-a[n-2][0])+abs(a[n-1][1]-a[n-2][1]);
        step+=abs(a[n-1][0])+abs(a[n-1][1]);
        printf("%d\n",step);
    }

    system("pause");
    return 0;
}
