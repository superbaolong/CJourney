/*
 * @lc app=leetcode.cn id=171 lang=c
 *
 * [171] Excel 表列序号
 */

// @lc code=start
//字母转数字
int change(char x){
    return (x-'A'+1);
}
//x的y次幂
int mi(int x,int y){
    int num=1;
    for(int i=0;i<y;i++){
        num*=x;
    }
    return num;
}
int titleToNumber(char* columnTitle) {
    int num=0;  //序列号
    int len=strlen(columnTitle);
    for(int i=0;i<len;i++){
        num+=change(columnTitle[i])*mi(26,len-i-1);
    }
    return num;
}
// @lc code=end

