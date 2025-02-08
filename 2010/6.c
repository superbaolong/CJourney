#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    int n;
    int h[10000]={0};
    printf("请输入n的值:");
    scanf("%d",&n);
    h[0]=1,h[1]=1;
    for(int i=2;i<=n;i++){
        for(int j=0;j<i;j++){
            h[i]+=h[j]*h[i-j-1];
        }
    }
    printf("%d\n",h[n]);

    system("pause");
    return 0;
}
