#include<stdbool.h>
#include<stdio.h>
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
/*
 * @lc app=leetcode.cn id=501 lang=c
 *
 * [501] 二叉搜索树中的众数
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

//中序遍历一次，得到的就是从小到大
void Mid_order(struct TreeNode* root,int num[10001],int* i){
    if(root==NULL)return;
    if(root->right==NULL)num[*i]=root->val;
    (*i)++;
    Mid_order(root->left,num,i);
    num[*i]=root->val;
    Mid_order(root->right,num,i);
}

int* findMode(struct TreeNode* root, int* returnSize) {
    int num[10001];
    int result[10001];   //要返回的

}
// @lc code=end

