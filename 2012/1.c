#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    int n;
    scanf("%d",&n);   //一共n件物品
    //输入每件物品的重量
    int w[n];
    for(int i=0;i<n;i++){
        scanf("%d",&w[i]);
    }
    //输入n个元素表示子集
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }

    int sum=0;
    for(int i=0;i<n;i++){
        if(s[i]==1)sum+=w[i];
    }
    printf("子集的重量和为:%d\n",sum);

    system("pause");
    return 0;
}
