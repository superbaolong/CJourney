/*
 * @lc app=leetcode.cn id=136 lang=c
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
int singleNumber(int* nums, int numsSize) {
    int result=0;
    for(int i=0;i<numsSize;i++){
        result^=nums[i];          //异或，没用过吧
    }
    return result;
}
// @lc code=end

