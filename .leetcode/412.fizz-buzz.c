#include<stdbool.h>
/*
 * @lc app=leetcode.cn id=412 lang=c
 *
 * [412] Fizz Buzz
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool is3(int x){
    if(x%3==0)return true;
    return false;
}
bool is5(int x){
    if(x%5==0)return true;
    return false;
}
bool is35(int x){
    if(x%15==0)return true;
    return false;
}

char** fizzBuzz(int n, int* returnSize) {
    char **answer;
    *returnSize=n;
    answer=malloc(sizeof(char*)*(n+1));
    for (int i = 1; i <= n; i++) {
        if (is35(i)) {
            answer[i - 1] = (char *)malloc(9 * sizeof(char)); // "FizzBuzz" 长度为 8，加 1
            sprintf(answer[i - 1], "FizzBuzz");
        } else if (is3(i)) {
            answer[i - 1] = (char *)malloc(5 * sizeof(char)); // "Fizz" 长度为 4，加 1
            sprintf(answer[i - 1], "Fizz");
        } else if (is5(i)) {
            answer[i - 1] = (char *)malloc(5 * sizeof(char)); // "Buzz" 长度为 4，加 1
            sprintf(answer[i - 1], "Buzz");
        } else {
            answer[i - 1] = (char *)malloc(12 * sizeof(char)); // 假设数字最大长度为 11（int 范围）
            sprintf(answer[i - 1], "%d", i); // 将数字 i 转换为字符串
        }
    }
    return answer;
}
// @lc code=end