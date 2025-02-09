#include<stdio.h>

struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
/*
 * @lc app=leetcode.cn id=543 lang=c
 *
 * [543] 二叉树的直径
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

int max(int x,int y){
    return (x>y)?x:y;
}

// 返回二叉树的深度，同时更新直径
int depth(struct TreeNode* root, int* max_len) {
    if (root == NULL) return 0;
    
    int left_depth = depth(root->left, max_len);
    int right_depth = depth(root->right, max_len);
    
    // 更新最大直径
    *max_len = (*max_len > left_depth + right_depth) ? *max_len : (left_depth + right_depth);
    
    // 返回当前节点的深度
    return (left_depth > right_depth ? left_depth : right_depth) + 1;
}

int diameterOfBinaryTree(struct TreeNode* root) {
    int max_len = 0; // 初始化最大直径
    depth(root, &max_len);
    return max_len;
}
// @lc code=end

