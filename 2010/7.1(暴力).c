#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int max_weight=0;

void max(int c1,int* w,int n,int current_weight,int i){   //把c1尽可能装满
    if (current_weight > c1 || i>n) return;
    if (current_weight > max_weight) max_weight = current_weight;
    
    max(c1,w,n,current_weight+w[i],i+1);
    max(c1,w,n,current_weight,i+1);
}

//回答能不能把所有集装箱装进两艘船中，w1+w2+...+wn<=c1+c2
int main() {
    max_weight=0;
    int c1,c2,n;   //两艘船的载重量分别是c1和c2，一共n个要装上船的箱子
    printf("请分别输入第一艘船载重量、第二艘船载重量、货物总数:");
    scanf("%d%d%d",&c1,&c2,&n);
    int* w=malloc(sizeof(int)*n);   //w[n]
    for(int i=0;i<n;i++){
        printf("请输入第%d件货物的重量:",i+1);
        scanf("%d",&w[i]);
    }

    //先把第一艘船尽可能装满
    max(c1,w,n,0,0);
    
    int sum=0;  //记录所有箱子重量的和
    for(int i=0;i<n;i++){
        sum+=w[i];
    }
    printf("箱子重量之和为:%d\n",sum);
    printf("在第一艘船最多能装:%d\n",max_weight);
    printf("第二艘船还剩下：%d\n",sum-max_weight);
    printf("能否全装两艘船上:");
    if(sum-max_weight<=c2){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    free(w);
    system("pause");
    return 0;
}