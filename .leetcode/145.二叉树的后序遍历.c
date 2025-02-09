#include<stdio.h>
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
/*
 * @lc app=leetcode.cn id=145 lang=c
 *
 * [145] 二叉树的后序遍历
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
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int countNodes(struct TreeNode* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}


void dfs(struct TreeNode* root,int* a,int* i){
    if(root==NULL)return;
    dfs(root->left,a,i);  
    dfs(root->right,a,i);
    a[(*i)]=root->val;
    (*i)++;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    * returnSize=countNodes(root);
    int i=0;
    int *a=malloc(sizeof(int)*(*returnSize));  
    dfs(root,a,&i);
    return a;  
}
// @lc code=end

