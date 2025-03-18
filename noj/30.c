
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int suan(int x){
    int num=0;
    for(int i=1;i<=x;i++){
        num+=i;
    }
    return num;
}

int main() {
    int num;
    scanf("%d",&num);
    int b=1;
    while(suan(b)<num){
        b++;
    }
    int result=num-suan(b-1);
    printf("%d",result);

    system("pause");
    return 0;
}
