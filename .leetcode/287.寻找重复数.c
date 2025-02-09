/*
 * @lc app=leetcode.cn id=287 lang=c
 *
 * [287] 寻找重复数
 */

// @lc code=start
int findDuplicate(int* nums, int numsSize) {
    //n+1=numssize
    int* hash=malloc(sizeof(int)*(numsSize));
    for(int i=0;i<numsSize;i++){
        hash[i]=0;
    }

    for(int i=0;i<numsSize;i++){
        hash[nums[i]]++;
        if(hash[nums[i]]>1)return nums[i];
    }
    return -1;
}
// @lc code=end

