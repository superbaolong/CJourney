#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    int N;  //迷宫是N×N的
    scanf("%d",&N);
    int m,n;
    scanf("%d%d",&m,&n);   //第m行第n列
    char direction;
    scanf("%c",&direction);
    if(direction=='s'){
        if(n>=N-1)printf("No\n");
        else printf("Yes\n");
    }

    system("pause");
    return 0;
}
