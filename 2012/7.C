#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

//判断三个条边能不能组成三角形,这题傻子都会
int main() {
    double a,b,c;
    printf("请输入三条边(以空格分割):\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a+b<=c || b+c<=a || a+c<=b){
        printf("不能组成三角形\n");
    }else{
        printf("能组成三角形哦\n");
    }

    system("pause");
    return 0;
}
