#include<stdbool.h>

/*
 * @lc app=leetcode.cn id=349 lang=c
 *
 * [349] 两个数组的交集
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool isnotrepeted(int a[],int x,int y){
    //y在a[x]前都是不重复的
    for(int i=0;i<x;i++){
        if(y==a[i])return false;
    }
    return true;
}
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    //去掉nusm中重复的
    int* nums1_norepetition=malloc(sizeof(int)*(nums1Size));
    int* nums2_norepetition=malloc(sizeof(int)*(nums2Size));
    int j=0;
    for(int i=0;i<nums1Size;i++){
        
    }
}
// @lc code=end

