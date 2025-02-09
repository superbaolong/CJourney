/*
 * @lc app=leetcode.cn id=496 lang=c
 *
 * [496] 下一个更大元素 I
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    * returnSize=nums1Size;
    for(int i=0;i<nums1Size;i++){
        //找到第二个数组里和nums【i】相同的数的下标
        int j=0;
        while(nums2[j]!=nums1[i]){
            j++;
        }
        for(j;j<nums2Size;j++){
            if(nums2[j]>nums1[i]){
                nums1[i]=nums2[j];
                break;
            }
        }
        if(j==nums2Size)nums1[i]=-1;
    }
    return nums1;
}
// @lc code=end

