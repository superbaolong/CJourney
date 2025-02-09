/*
 * @lc app=leetcode.cn id=3 lang=c
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
int lengthOfLongestSubstring(char* s) {
    int max_len=0;
    int current_len=0;
    int s_len=strlen(s);
    char* t=malloc(sizeof(char)*s_len);
    for(int left=0;left<s_len;left++){
        for(int i=left;i>=left-current_len;i--){
            if(s[left]==s[i])current_len=0; //有一样的，current_len重新计数
        }
        current_len++;
        if(current_len>max_len)max_len=current_len;
    }
    return max_len;
}
// @lc code=end

