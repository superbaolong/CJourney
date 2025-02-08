#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int dp[100000];

void p(){
    dp[0]=0;  //0花生米必输
    dp[1]=1;  //1花生米必赢
    for(int n=2;n<100000;n++){
        dp[n]=0;    //初始设为必输
        
    }

}

int main() {


    system("pause");
    return 0;
}
