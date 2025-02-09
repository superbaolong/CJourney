/*
 * @lc app=leetcode.cn id=482 lang=c
 *
 * [482] 密钥格式化
 */

// @lc code=start
char* licenseKeyFormatting(char* s, int k) {
    int s_len=strlen(s);
    int s_truelen=0;
    for(int i=0;i<s_len;i++){
        if(s[i]!=' ')s_truelen++;   //记录除了空格外的长度
    }
    char t[s_len];
    int i=0;
    if(s_truelen%k==0){
        //可以整除时
        
    }
}
// @lc code=end

