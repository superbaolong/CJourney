#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    int record[26]={0};
    char a[100],b[100],c[100],d[100];
    //输入四行大写字母，每行不超过一百个,要统计每个字母总共出现的次数,并以柱形图表示
    printf("请依次输入四行大写字母:\n");
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    fgets(c,sizeof(c),stdin);
    fgets(d,sizeof(d),stdin);
    int a_length=strlen(a);
    int b_length=strlen(b);
    int c_length=strlen(c);
    int d_length=strlen(d);
    int length=a_length + b_length + c_length + d_length;
    for(int i=0;i<a_length;i++){
        record[a[i]-'A']++;
    }
    for(int i=0;i<b_length;i++){
        record[b[i]-'A']++;
    }
    for(int i=0;i<c_length;i++){
        record[c[i]-'A']++;
    }
    for(int i=0;i<d_length;i++){
        record[d[i]-'A']++;
    }
    int max=0;  //统计出现次数最多是多少
    for(int i=0;i<26;i++){
        if(record[i]>max)max=record[i];
    }
    //从第零行到第max-1行依次输出
    for(int i=0;i<max;i++){
        for(int j=0;j<26;j++){
            if(i+record[j]>=max){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ");

    system("pause");
    return 0;
}
