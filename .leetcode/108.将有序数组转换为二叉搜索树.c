#include<stdio.h>
struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
};
/*
 * @lc app=leetcode.cn id=108 lang=c
 *
 * [108] 将有序数组转换为二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* dfs(int* nums, int left,int right){
    if(left>right){
        return NULL;
    }
    int m=(left+right)/2;
    struct TreeNode* node=malloc(sizeof(struct TreeNode));
    node->val=nums[m];
    node->left=dfs(nums,left,m-1);
    node->right=dfs(nums,m+1,right);
    return node;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    return dfs(nums,0,numsSize-1);
}
// @lc code=end

