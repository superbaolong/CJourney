#include<stdio.h>
  struct TreeNode {
     int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
/*
 * @lc app=leetcode.cn id=671 lang=c
 *
 * [671] 二叉树中第二小的节点
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
int min(int x,int y){
	return (x<y)?x:y;
}
int findSecondMinimumValue(struct TreeNode* root) {
  	if (!root || !root->left) {
		return -1; // 叶子节点无第二小的值
  	}
  	int left = root->left->val;
  	int right = root->right->val;
  	if (left == root->val) {
      	left = findSecondMinimumValue(root->left);
  	}
 	if (right == root->val) {
     	right = findSecondMinimumValue(root->right);
  	}
	if (left == -1) return right;  // 如果左子树没有第二小值，返回右子树结果
	if (right == -1) return left;  // 如果右子树没有第二小值，返回左子树结果
  
	return left < right ? left : right;
}
// @lc code=end

