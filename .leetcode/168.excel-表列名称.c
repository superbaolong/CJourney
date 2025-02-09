/*
 * @lc app=leetcode.cn id=168 lang=c
 *
 * [168] Excel 表列名称
 */

// @lc code=start
char* convertToTitle(int columnNumber) {
    char* Alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int num=0; //记录输出有几位
    int a=columnNumber;
    while(a!=0){
        num++;
        a=(a-1)/26;
    }
    //给输出分配空间
    char* print=malloc(sizeof(char)*(num+1));
    a=columnNumber;
    for(int i=num-1;i>=0;i--){
        print[i]=Alphabet[(a-1)%26];
        a=(a-1)/26;
    }
    print[num] = '\0';           //这什么鬼
    return print;
}
// @lc code=end

