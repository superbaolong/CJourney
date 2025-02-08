//求后缀表达式的值
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

typedef struct{
    int data[25];
    int top;
}SeqStack;

bool isNumber(char x){
    return (x>='0' && x<='9');
}
bool isOperator(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/')return true;
    return false;
}

int main() {
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int length=strlen(s);
    SeqStack sstack;
    sstack.top=0;
    for(int i=0;i<length;i++){
        if(s[i]<='i' && s[i]>='0'){
            sstack.data[sstack.top++]=s[i]-'0';
        }
        if(s[i]=='+'){
            sstack.top-=2;
            sstack.data[sstack.top]+=sstack.data[sstack.top+1];
            sstack.top++;
        }
        if(s[i]=='-'){
            sstack.top-=2;
            sstack.data[sstack.top]-=sstack.data[sstack.top+1];
            sstack.top++;
        }
        if(s[i]=='*'){
            sstack.top-=2;
            sstack.data[sstack.top]*=sstack.data[sstack.top+1];
            sstack.top++;
        }
        if(s[i]=='/'){
            sstack.top-=2;
            sstack.data[sstack.top]/=sstack.data[sstack.top+1];
            sstack.top++;
        }
    }
    printf("%d\n", sstack.data[0]);

    system("pause");
    return 0;
}
