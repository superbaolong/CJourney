/*
 * @lc app=leetcode.cn id=121 lang=c
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
int maxProfit(int* prices, int pricesSize) {
    int max_profit = 0;
    
    // 循环遍历每一天的买入
    for (int i = 0; i < pricesSize - 1; i++) {
        // 从i+1到pricesSize中找出最小的卖出价格
        for (int j = i + 1; j < pricesSize; j++) {
            int current_profit = prices[j] - prices[i];
            if (current_profit > max_profit) {
                max_profit = current_profit;
            }
        }
    }
    
    return max_profit;
}

// @lc code=end

