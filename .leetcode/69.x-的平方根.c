/*
 * @lc app=leetcode.cn id=69 lang=c
 *
 * [69] x 的平方根 
 */

// @lc code=start
int mySqrt(int x) {
    if (x < 2) return x;
    
    for (int i = 0; i < x; i++) {
        // 使用 long long 防止溢出
        long long y = (long long)i * i;
        long long z = (long long)(i + 1) * (i + 1);
        
        if (y <= x && z > x) return i;
        if (z == x) return i + 1;
    }
    
    return -1; // 这里的 -1 防止控制流不返回值
}

// @lc code=end

