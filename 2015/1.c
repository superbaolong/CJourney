#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>
//就是找三个数里最小的输出
int main() {
    int a,b,c,min;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b){
        min=a;
    }else{
        min=b;
    }
    if(min<c){
        printf("%d\n",min);
    }else{
        printf("%d\n",c);
    }

    system("pause");
    return 0;
}
