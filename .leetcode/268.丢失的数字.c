/*
 * @lc app=leetcode.cn id=268 lang=c
 *
 * [268] 丢失的数字
 */

// @lc code=start
int missingNumber(int* nums, int numsSize) {
    //找出闭区间[0,numsSize]中没有出现在数组nums里的数
    int* a=malloc(sizeof(int)*(numsSize+1));
    //初始化数组a为全0
    for(int i=0;i<=numsSize;i++){
        a[i]=0;
    }
    //出现过的标为1
    for(int i=0;i<numsSize;i++){
        a[nums[i]]=1;
    }
    //是0的就是没出现过的
    for(int i=0;i<=numsSize;i++){
        if(a[i]==0)return i;
    }
    free(a);
    return -1;
}
//或者可以把0-n全部加起来，减掉nums数组里的数的和
// @lc code=end

