#include<stdbool.h>
#include<stdio.h>

  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
/*
 * @lc app=leetcode.cn id=222 lang=c
 *
 * [222] 完全二叉树的节点个数
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

//入队


int countNodes(struct TreeNode* root) {
    if(!root)return 0;    //root为空
    struct TreeNode* left=root->left;
    struct TreeNode* right=root->right;
    int left_height=0;         //左子树高度
    int right_height=0;         //右子树高度
    //left搞到最左边，right搞到最右下角，两个高度相同就是满二叉树,公式计算就行
    while(left!=NULL){
    	left=left->left;
    	left_height++;
    }
    while(right!=NULL){
    	right=right->right;
    	right_height++;
    }
    if(left_height==right_height)return (2<<right_height)-1;
    //高度不同则递归，1个root节点+左子树节点个数+右子树个数
    return 1+countNodes(root->left)+countNodes(root->right);
}
// @lc code=end

