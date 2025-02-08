#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    int a=0,b=0,c=0,d=0;   //分别统计英文字母、空格、数字、其他字符的个数
    char s[10000];
    fgets(s,sizeof(s),stdin);
    int s_len=strlen(s);
    for(int i=0;i<s_len;i++){
        if((s[i]<='z' && s[i]>='a') || (s[i]<='Z' && s[i]>='A')){
            a++;
        }else if(s[i]==' '){
            b++;
        }else if(s[i]<='9' && s[i]>='0'){
            c++;
        }else{
            d++;
        }
    }
    printf("英文字母的个数:%d\n空格的个数:%d\n数字的个数:%d\n其他字符的个数:%d\n",a,b,c,d);

    system("pause");
    return 0;
}
