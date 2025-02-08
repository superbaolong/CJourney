#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
    char a[100];
    printf("输入单词:");
    gets(a);
    int len=strlen(a);
    for(int i=0;i<len;i++){
        if(a[i]>='a' && a[i]<='z'){
            a[i]=a[i]-32;
        }else{
            a[i]+=32;
        }
    }
    printf("%s\n",a);

    system("pause");
    return 0;
}
