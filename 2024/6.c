#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

bool judge(int a,int b,int c,int d,int e){
    if(a+b+c>d+e)return false;
    if(a+b+c<=d || a+b+c<=e)return true;
    if(a+b<=d && c<=e){
        return true;
    }else if(a+c<=d && b<=e){
        return true;
    }else if(b+c<=d && a<=e){
        return true;
    }else if(a+b<=e && c<=d){
        return true;
    }else if(a+c<=e && b<=d){
        return true;
    }else if(b+c<=e && a<=d){
        return true;
    }
    return false;   
}

int main() {
    int T;//一共T个用例
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        int A,B,C,D,E;
        scanf("%d %d %d %d %d",&A,&B,&C,&D,&E); //输入A-E
        if(judge(A,B,C,D,E)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    system("pause");
    return 0;
}
