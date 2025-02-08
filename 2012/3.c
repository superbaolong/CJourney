#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int get(int n){
    //一次可以取k颗,0<k<10，jerry先取，并让tom取最后一颗，问jerry第一次取几颗？
    return (n-1)%10;
}

int main() {
    while(1){
        int n;
        scanf("%d",&n);
        if(n==0)break;
        int result=get(n);
        printf("%d\n",result);
    }

    system("pause");
    return 0;
}
