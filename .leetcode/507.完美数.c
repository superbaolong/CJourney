#include<stdbool.h>
/*
 * @lc app=leetcode.cn id=507 lang=c
 *
 * [507] 完美数
 */

// @lc code=start
bool checkPerfectNumber(int num) {
    if(num<=1)return false;
    int sum = 1; // 1 是所有正整数的因子
    int sqrt_num = (int)sqrt(num);  // 计算 sqrt(num)
    
    for (int i = 2; i <= sqrt_num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {  // 确保不重复添加因子
                sum += num / i;
            }
        }
    }

    return sum==num;
}
// @lc code=end

