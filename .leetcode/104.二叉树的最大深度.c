#include<stdio.h>
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
/*
 * @lc app=leetcode.cn id=104 lang=c
 *
 * [104] 二叉树的最大深度
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
int maxDepth(struct TreeNode* root) {
    if (root == NULL) return 0;  // 如果节点为空，深度为 0
    int left_depth = maxDepth(root->left);  // 递归计算左子树的深度
    int right_depth = maxDepth(root->right);  // 递归计算右子树的深度
    return (left_depth > right_depth ? left_depth : right_depth) + 1;  // 取左右子树深度的最大值加 1
}

// @lc code=end

