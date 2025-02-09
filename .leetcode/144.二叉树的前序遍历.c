#include<stdio.h>
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
/*
 * @lc app=leetcode.cn id=144 lang=c
 *
 * [144] 二叉树的前序遍历
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

//算节点个数
int countNodes(struct TreeNode* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}


void dfs(struct TreeNode* root,int* a,int* i){
    if(root==NULL)return;
    a[(*i)]=root->val;
    (*i)++;
    dfs(root->left,a,i);  
    dfs(root->right,a,i);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    //有* returnSize个节点
    * returnSize=countNodes(root);
    int i=0;
    int *a=malloc(sizeof(int)*(*returnSize));  
    dfs(root,a,&i);
    return a;
}
// @lc code=end