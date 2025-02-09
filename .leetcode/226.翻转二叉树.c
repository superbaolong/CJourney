 #include<stdio.h>
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
/*
 * @lc app=leetcode.cn id=226 lang=c
 *
 * [226] 翻转二叉树
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
void invert(struct TreeNode* root){
    struct TreeNode* temp;
    if(root==NULL)return;
    if(root->left!=NULL || root->right!=NULL){
        temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
    invert(root->right);
    invert(root->left);
}
struct TreeNode* invertTree(struct TreeNode* root) {
    invert(root);
    return root;
}
// @lc code=end

