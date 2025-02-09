/*
 * @lc app=leetcode.cn id=88 lang=c
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=0,j=0,k=0;
    int nums[nums1Size];
    while(k<nums1Size){
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                nums[k]=nums1[i];
                i++;
            }else{
                nums[k]=nums2[j];
                j++;
            }
            k++;
        }
        //剩余的也放到nums里
        while(i<m){
            nums[k]=nums1[i];
            i++;
            k++;
        }
        while(j<n){
            nums[k]=nums2[j];
            j++;
            k++;
        }
    }
    for(i=0;i<nums1Size;i++){
        nums1[i]=nums[i];
    }
}
// @lc code=end

