/*
 * @lc app=leetcode.cn id=75 lang=c
 *
 * [75] 颜色分类
 */

// @lc code=start
void sortColors(int* nums, int numsSize) {
    int i=-1,j=-1,k=-1;  //ijk三个指针分别指向红白蓝（012）
    //012分别挪三二一个指针
    for(int m=0;m<numsSize;m++){
        if(nums[m]==0){
            i++;
            j++;
            k++;
        }
        if(nums[m]==1){
            k++;
            j++;
        }
        if(nums[m]==2){
            k++;
        }
    }

    for(int m=0;m<=i;m++){
        nums[m]=0;
    }
    for(int m=i+1;m<=j;m++){
        nums[m]=1;
    }
    for(int m=j+1;m<=k;m++){
        nums[m]=2;
    }
}
// @lc code=end

