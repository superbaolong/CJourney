#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    printf("请输入整数n，表示一共跑了n圈：");
    int n;
    scanf("%d",&n);
    while(n--){
        //九个变量表示分，秒，毫秒
        int m1,m2,m3;
        int s1,s2,s3;
        int ss1,ss2,ss3;
        //输入九个变量，表示三圈分别耗时多少
        printf("输入九个变量，表示三圈分别耗时多少：");
        scanf("%d%d%d%d%d%d%d%d%d",&m1,&s1,&ss1,&m2,&s2,&ss2,&m3,&s3,&ss3);
        int m=m1+m2+m3;
        int s=s1+s2+s3;
        int ss=ss1+ss2+ss3;
        int sum=m*60000+s*1000+ss;
        sum=sum/3;
        m=sum/60000;
        s=(sum%60000)/1000;
        ss=(sum%60000)%1000;
        printf("%d %d %d\n",m,s,ss);

    }

    system("pause");
    return 0;
}
