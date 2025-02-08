#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
    int A,B;
    scanf("%d%d",&A,&B);
    if(A%3==0 && B%5==0){
        int C=A+B;
        printf("%d\n",C);
    }else if(B%5==0){
        while(A%3!=0){
            A--;
        }
        int C=A+B;
        printf("%d\n",C);
    }else if(A%3==0){
        while(B%5!=0){
            B--;
        }    
        int C=A+B;
        printf("%d\n",C);   
    }else{
        while(A%3!=0){
            A--;
        }
        while(B%5!=0){
            B--;
        } 
        int C=A+B;
        printf("%d\n",C);  
    }


    system("pause");
    return 0;
}
