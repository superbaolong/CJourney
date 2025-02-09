#include<stdbool.h>
#include<stdio.h>
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
/*
 * @lc app=leetcode.cn id=101 lang=c
 *
 * [101] 对称二叉树
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

void mirror(struct TreeNode* root){
    if (root == NULL) return;
    if(root->right ==NULL && root->left==NULL)return;
    //交换左右子树
    struct TreeNode* temp;
    temp=root->left;
    root->left=root->right;
    root->right=temp;

    mirror(root->right);
    mirror(root->left);
}
//判断两个数是不是相同
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p==NULL && q==NULL)return true;        //都空
    if(p == NULL || q == NULL) return false;        //一个为空另一个不空
    if(q->val!=p->val)return false;      //值不同

    return isSameTree(p->right,q->right) && isSameTree(p->left,q->left);//递归左右子树
}
bool isSymmetric(struct TreeNode* root) {
    if(root->left==NULL && root->right==NULL)return true;
    struct TreeNode* right_tree=root->right;      //根节点右子树
    struct TreeNode* left_tree=root->left;      //根节点左子树
    mirror(left_tree);          //把左子树镜像了
    return (isSameTree(left_tree,right_tree))?true:false;
}
// @lc code=en