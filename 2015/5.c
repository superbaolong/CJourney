#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

bool judge(char a[255],char b[255],int a_len,int b_len,int i){
    int j=0;
    for(;j<b_len;j++){
        if(a[i+j]!=b[j])break;
    }
    if(j==b_len){
        return true;    //找到了
    }
    return false;
}
//字符串替换
int main() {
    char a[600],b[255],c[255];   //字符串长度不超过255
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    fgets(c,sizeof(c),stdin);
    // 去除换行符
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';
    c[strcspn(c, "\n")] = '\0';

    int a_len=strlen(a);
    int b_len=strlen(b);
    int c_len=strlen(c);
    //以上是输入。
    //操作如下:如果字符串a包含b，则把a中出现的第一个字符串b换成c并输出a;若a不包含b，直接输出a。
    for(int i=0;i<a_len-b_len+1;i++){
        if(a[i]==b[0] && judge(a,b,a_len,b_len,i)){     //a中找到b
            if(b_len>c_len){
                for(int j=i+b_len;j<a_len;j++){
                    a[j+c_len-b_len]=a[j];
                }
            }else{   //c比b长，先把后面的往后挪c比b长的位数
                for(int j=a_len-1;j>i+b_len-1;j--){
                    a[j+c_len-b_len]=a[j];
                }
            }

            for(int j=0;j<c_len;j++){
                a[i+j]=c[j];
            }
            a_len = strlen(a); // 更新a的长度
            break;
        }
    }
    printf("%s\n",a);

    system("pause");
    return 0;
}
