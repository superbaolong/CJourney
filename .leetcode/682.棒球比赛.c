#include<stdio.h>
/*
 * @lc app=leetcode.cn id=682 lang=c
 *
 * [682] 棒球比赛
 */

// @lc code=start

//弄个栈
typedef struct{
    int ops[1000];  //最多一千个
    int top;
}stack;

int calPoints(char** operations, int operationsSize) {
    stack Stack;
    Stack.top=0;   //top是几，栈里就有几个元素
    for(int i=0;i<operationsSize;i++){
        if(operations[i][0]=='+'){
            Stack.ops[Stack.top]=Stack.ops[Stack.top-1]+Stack.ops[Stack.top-2];
            Stack.top++;
        }else if(operations[i][0]=='D'){
            Stack.ops[Stack.top]=Stack.ops[Stack.top-1]*2;
            Stack.top++;
        }else if(operations[i][0]=='C'){
            Stack.top--;
        }else{
            Stack.ops[Stack.top]=atoi(operations[i]);
            Stack.top++;
        }
    }
    int sum=0;
    for(int i=0;i<Stack.top;i++){
            sum+=Stack.ops[i];
    }
    return sum;
}
// @lc code=end

