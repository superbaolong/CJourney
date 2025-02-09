/*
 * @lc app=leetcode.cn id=169 lang=c
 *
 * [169] 多数元素
 */

// @lc code=start
void exchange(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int majorityElement(int* nums, int numsSize) {
    if(numsSize==1)return nums[0];
    qsort(nums,numsSize,sizeof(int),compare);
    
    /*for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize-1;j++){
            if(nums[j+1]<=nums[j])exchange(&nums[j],&nums[j+1]);
        }
    }*/

    //中间的肯定是多数元素
    return nums[numsSize/2];
}
// @lc code=end

