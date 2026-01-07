#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    int a,b;
    int ans;
    scanf("%d%d",&a,&b);
    if(a%3==0 &&b%5==0){
        ans=a+b;
    }else if(a%3!=0 && b%5==0){
        while(a%3!=0){
            a--;
        }
        ans=a+b;
    }else if(a%3==0 && b%5!=0){
        while(b%5!=0){
            b++;
        }
        ans=a+b;
    }else{
        while(a%3!=0){
            a--;
        }
        while(b%5!=0){
            b++;
        }
        ans=a+b;
    }


    printf("%d\n",ans);

    system("pause");
    return 0;
}
