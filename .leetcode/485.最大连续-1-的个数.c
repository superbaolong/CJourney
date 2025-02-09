/*
 * @lc app=leetcode.cn id=485 lang=c
 *
 * [485] 最大连续 1 的个数
 */

// @lc code=start
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int current_num=0;   //1的个数
    int max_num=0;    //最大的连续1的个数
    for(int i=0;i<numsSize;i++){
        if(nums[i]==1){
            current_num++;
            if(current_num>max_num){
                max_num=current_num;
            }
        }else{
            current_num=0;
        }
    }
    return max_num;
}
// @lc code=end

