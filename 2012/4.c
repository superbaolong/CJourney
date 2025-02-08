#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    while(1){
        int n;
        scanf("%d",&n);   
        if(n==0)break;     //一共n颗花生米，n为0表示输入结束
        int dp[n+1];
        for(int i=1;i<=n;i++){
            dp[i]=0;
        }
        dp[2]=1;   //一共两粒，jerry要先取1
        for(int i=1;i<=n;i++){
            if(dp[i]==0){
                if(i+1<=n)dp[i+1]=1;
                if(i+5<=n)dp[i+5]=1;
                if(i+10<=n)dp[i+10]=1;
            }
        }
        printf("%d\n",dp[n]);
    }

    system("pause");
    return 0;
}
