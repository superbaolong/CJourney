#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    int a,b,m;
    scanf("%d%d%d",&a,&b,&m);
    long long c=a*b;
    int d=c%m;
    printf("%d",d);

    system("pause");
    return 0;
}
