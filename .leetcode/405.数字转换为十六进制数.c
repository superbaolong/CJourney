/*
 * @lc app=leetcode.cn id=405 lang=c
 *
 * [405] 数字转换为十六进制数
 */

// @lc code=start
char tentosixteen(int x){
    if(x<10)return '0'+x;
    if(x==10)return 'a';
    if(x==11)return 'b';
    if(x==12)return 'c';
    if(x==13)return 'd';
    if(x==14)return 'e';
    if(x==15)return 'f';
    return '?';
}
char* toHex(int num) {
    if(num<0){
        num+=(long long)2 << 31;
    }
    int i=0;   
    long long temp=num;
    while(temp!=0){
        temp=temp/16;
        i++;
    }
    int x=i;   //一共x位
    char* result=malloc(sizeof(char)*(x+1));
    result[x] = '\0';
    for(i=x-1;i>=0;i--){
        int ten=num%16;
        result[i]=tentosixteen(ten);
        num=num/16;
    }
    return result;
}
// @lc code=end

