#include <stdio.h>
#include<stdlib.h>

int main() {
    int width,num;
    scanf("%d %d",&num,&width);

    // 动态宽度输出整数
    printf("%0*d\n", width, num);

    system("pause");
    return 0;
}
