/*
 * @lc app=leetcode.cn id=696 lang=c
 *
 * [696] 计数二进制子串
 */

// @lc code=start
int min(int x, int y) {
    return (x < y) ? x : y;
}

int countBinarySubstrings(char* s) {
    int s_len = strlen(s);
    int result=0;
    int current=1,pre=0;
    for(int i=0;i<s_len-1;i++){
        if(s[i]==s[i+1])current++;
        else{
            pre=current;
            current=1;
        }
        if (pre >= current)result++;
    }
    return result;
}
// @lc code=end

