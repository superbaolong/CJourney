/*
 * @lc app=leetcode.cn id=389 lang=c
 *
 * [389] 找不同
 */

// @lc code=start
char findTheDifference(char* s, char* t) {
    int s_len=strlen(s);

    int hash[26]={0};
    for(int i=0;i<s_len;i++){
        hash[s[i]-'a']--;
    }
    for(int i=0;i<=s_len;i++){
        hash[t[i]-'a']++;
    }
    int added;
    for(int i=0;i<26;i++){
        if(hash[i]==1)added=i;
    }
    return added+'a';
}
// @lc code=end

