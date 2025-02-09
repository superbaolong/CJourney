#include<stdbool.h>
#include<stdio.h>

/*
 * @lc app=leetcode.cn id=217 lang=c
 *
 * [217] 存在重复元素
 */

// @lc code=start

//方法一：超时了
bool containsDuplicate(int* nums, int numsSize) {
    if(numsSize==1)return false;
    //每个元素，在后面找有没有跟他一样的，时间复杂度O(n^2)
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j])return true;
        }
    }
    return false;
}

//方法二:先排序，依次看相邻两个是不是一样的；
//或者用哈希表，如果当前存在哈希表的已经被纯果乐，return false

// @lc code=end

