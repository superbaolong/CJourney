/*
 * @lc app=leetcode.cn id=191 lang=c
 *
 * [191] 位1的个数
 */

// @lc code=start

int hammingWeight(int n) {
    int result=0;  //1的位数
    int num=0;   //总位数
    int temp=n;  //题目说n>=1
    while(temp!=0){
        num++;
        temp=temp/2;
    }
    int* b=malloc(sizeof(int)*num); 
    temp=n;
    int i=0;
    while(temp!=0){
        b[i]=temp%2;
        i++;
        temp=temp/2;
    }  
    for(int i=0;i<num;i++){
        if(b[i]==1)result++;
    }
    return result;
}
// @lc code=end

