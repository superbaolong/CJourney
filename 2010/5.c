#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int max(int a,int b){
    return(a>b)?a:b;
}

int main() {
    char a[10000];
    char b[10000];
    scanf("%s%s",a,b);
    int a_len=strlen(a);
    int b_len=strlen(b);
    //初始化dp为0
    int **dp = (int **)malloc((a_len + 1) * sizeof(int *));
    for (int i = 0; i <= a_len; i++) {
        dp[i] = (int *)malloc((b_len + 1) * sizeof(int));
        memset(dp[i], 0, (b_len + 1) * sizeof(int));  // 初始化为0
    }
    
    for(int i=1;i<=a_len;i++){
        for(int j=1;j<=b_len;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    printf("%d",dp[a_len][b_len]);

    free(dp);
    system("pause");
    return 0;
}
