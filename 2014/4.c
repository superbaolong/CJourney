#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

double cal(double x,double y){
    return (x>y)? (x+y) : (x*y);
}

int main() {
    double x,y;
    scanf("%lf%lf",&x,&y);
    int result=cal(x,y);
    printf("%d\n",result);

    system("pause");
    return 0;
}
