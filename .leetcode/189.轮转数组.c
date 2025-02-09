/*
 * @lc app=leetcode.cn id=189 lang=c
 *
 * [189] 轮转数组
 */

// @lc code=start
void rotate(int* nums, int numsSize, int k) {
    //nums复制到copy_nums
    int* copy_nums=malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++){
        copy_nums[i]=nums[i];
    }
    //轮转
    for (int i = 0; i < numsSize; i++) {
        nums[(i + k) % numsSize] = copy_nums[i]; // 计算新位置
    }
}
// @lc code=end

