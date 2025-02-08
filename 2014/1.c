#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main() {
    int year,wage;
    printf("请分别输入员工的工龄和工资:\n");
    scanf("%d%d",&year,&wage); //分别输入改员工的工龄和工资
    if(year>=20){
        if(wage>2000){wage+=200;}else{
            wage+=180;
        }
    }else{
        if(wage>1500){
            wage+=150;
        }else{
            wage+=120;
        }
    }
    printf("加完工资后员工的工资为:%d\n",wage);

    system("pause");
    return 0;
}
