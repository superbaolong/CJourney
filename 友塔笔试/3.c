#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

//判断全零
bool isAllZero(int a[8]){
    for(int i=0;i<8;i++){
        if(a[i])return false;
    }
    return true;
}

int main() {
    int a[8];
    for(int i=0;i<8;i++){
        scanf("%d",&a[i]);
    }
    int step=0;
    while(!isAllZero){
        for(int i=0;i<8;i++){
            if(a[i]==1 && a[(i+1)%8]==1 && a[(i+2)%8]==1){  //三个连着的1
                step++;
                a[i]=0,a[(i+1)%8]=0,a[(i+2)%8]=0;
            }
        }
        for(int i=0;i<8;i++){
            if(a[i]==1 && a[(i+1)%8]==1){  //2个连着的1
                step++;
                a[i]=0,a[(i+1)%8]=0,a[(i+2)%8]=1;
            }
        }
        for(int i=0;i<8;i++){
            if(a[i]==1){  //1个连着的1
                step++;
                a[i]=0,a[(i+1)%8]=1,a[(i+2)%8]=1;
            }
        }
    }
    printf("%d",step);

    system("pause");
    return 0;
}
