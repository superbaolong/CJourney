/*
 * @lc app=leetcode.cn id=342 lang=c
 *
 * [342] 4的幂
 */

// @lc code=start
bool isPowerOfFour(int n) {
    
    if(n<1)return false;
    long long x=1;
    while(x<n){
        x=x*4;
    }
    if(x==n)return true;
    return false;

    
}
// @lc code=end

