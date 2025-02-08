#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    char s[10000],t[10000];
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);
    s[strcspn(s, "\n")] = 0;    //去除结尾的换行符
    t[strcspn(t, "\n")] = 0;
    int s_len=strlen(s);
    int t_len=strlen(t);
    char temp;
    for(int i=0;i<t_len/2;i++){
        temp=t[t_len-i-1];
        t[t_len-i-1]=t[i];
        t[i]=temp;
    }   //把t倒了个序

    int i = 0, j = 0;
    // 交替打印字符
    while (i < s_len || j < t_len) {
        if (i < s_len) {
            printf("%c", s[i++]);
        }
        if (j < t_len) {
            printf("%c", t[j++]);
        }
    }
    printf("\n");

    system("pause");
    return 0;
}
