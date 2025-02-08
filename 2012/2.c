#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    char s[10000];
    gets(s);
    int s_len=strlen(s);
    int a,b,c,d;
    a=0,b=0,c=0,d=0;
    for(int i=0;i<s_len;i++){
        if(s[i]>='a' && s[i]<='z'){a++;}
        else if(s[i]>='A' && s[i]<='Z'){a++;}
        else if(s[i]>='0' && s[i]<='9'){b++;}
        else if(s[i]==' '){c++;}else{
            d++;
        }
    }
    printf("%d %d %d %d",a,b,c,d);

    system("pause");
    return 0;
}
