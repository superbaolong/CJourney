 #include<stdio.h>
 struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
/*
 * @lc app=leetcode.cn id=404 lang=c
 *
 * [404] 左叶子之和
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


int sumOfLeftLeaves(struct TreeNode* root) {
    int sum=0;
    if(root==NULL)return 0;
    if(root->left!=NULL && root->left->right==NULL && root->left->left==NULL){
        sum+=root->left->val;
    }
    sum+=sumOfLeftLeaves(root->left);
    sum+=sumOfLeftLeaves(root->right);
    return sum;
}
// @lc code=end

