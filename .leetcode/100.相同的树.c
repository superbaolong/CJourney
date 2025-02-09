#include<stdio.h>
#include<stdbool.h>
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
/*
 * @lc app=leetcode.cn id=100 lang=c
 *
 * [100] 相同的树
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
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p==NULL && q==NULL)return true;        //都空
    if(p == NULL || q == NULL) return false;        //一个为空另一个不空
    if(q->val!=p->val)return false;      //值不同

    return isSameTree(p->right,q->right) && isSameTree(p->left,q->left);//递归左右子树
}
// @lc code=end

