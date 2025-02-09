#include<stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
/*
 * @lc app=leetcode.cn id=257 lang=c
 *
 * [257] 二叉树的所有路径
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

//记录有多少个叶子节点
int dfs(struct TreeNode* root,int* num){
    if(root->left==NULL && root->right==NULL)return (*num)++; //当前为叶子节点，路径+1
    if(root->right!=NULL){
        dfs(root->right,num);
    }
    if(root->left!=NULL){
        dfs(root->left,num);
    }
}
//记录每条路径的长度
void dfs_len(struct TreeNode* root,int* len){
    if(root==NULL){
        (*len)--;
        return;
    }
    
}

char** binaryTreePaths(struct TreeNode* root, int* returnSize) {
    //先看有几个叶子节点，就有几条路径
    int num=0;  //记录叶子节点个数
    *returnSize=dfs(root,&num);
    int **paths=malloc((*returnSize)*sizeof(int*));
    for(int i=0;i<(*returnSize);i++){
        int len=0;
        dfs(root,&len);
        paths[i]=malloc(len*sizeof(int));
    }
}
// @lc code=end