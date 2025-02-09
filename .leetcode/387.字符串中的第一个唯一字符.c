/*
 * @lc app=leetcode.cn id=387 lang=c
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
int firstUniqChar(char* s) {
    int s_len=strlen(s);
    int hash[26]={0};
    for(int i=0;i<s_len;i++){
        hash[s[i]-'a']++;
    }
    for(int i=0;i<s_len;i++){
        if(hash[s[i]-'a']==1)return i;
    }
    return -1;
}
// @lc code=end