/*
 * @lc app=leetcode.cn id=338 lang=c
 *
 * [338] 比特位计数
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//计算整数x有几位1
int count(int x){
    int n=0;
    while(x!=0){
        if(x%2==1)n++;
        x=x/2;
    }
    return n;
}

int* countBits(int n, int* returnSize) {
    *returnSize=n+1;
    int* ans=malloc(sizeof(int)*(*returnSize));
    for(int i=0;i<=n;i++){
        ans[i]=count(i);
    }
    return ans;
}
// @lc code=end

