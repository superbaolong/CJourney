#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>
//六数码问题
int main() {
    int n;
    scanf("%d",&n);  //一共n个测例
    for(int q=0;q<n;q++){
        int num[6];
        for(int i=0;i<6;i++){
            scanf("%d",&num[i]);    //输入测例，1-6六个数字的排列组合
        }
        //计算达到布局1 2 3 4 5 6所需的最少步数
        
    }

    system("pause");
    return 0;
}
