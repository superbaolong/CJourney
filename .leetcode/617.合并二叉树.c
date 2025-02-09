#include<stdio.h>
   struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
/*
 * @lc app=leetcode.cn id=617 lang=c
 *
 * [617] 合并二叉树
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
struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2) {
    // 如果 root1 为空，则直接返回 root2
    if (!root1) return root2;
    // 如果 root2 为空，则直接返回 root1
    if (!root2) return root1;
    // 分配内存
    struct TreeNode* root3 = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    
    root3->val=root1->val + root2->val;
    root3->left=mergeTrees(root1->left,root2->left);
    root3->right=mergeTrees(root1->right,root2->right);
    return root3;
}
// @lc code=end
