#include<stdbool.h>
#include<stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    };
/*
 * @lc app=leetcode.cn id=112 lang=c
 *
 * [112] 路径总和
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
bool hasPathSum(struct TreeNode* root, int targetSum) {
    //空节点返回false
    if(root==NULL)return false;
    //一个节点看和目标sum是不是一样
    if(root->left==NULL && root->right==NULL){
        return(root->val==targetSum)?true:false;
    }
    //递归
    bool left_hasPathSum=hasPathSum(root->left,targetSum-root->val);
    bool right_hasPathSum=hasPathSum(root->right,targetSum-root->val);
    return(left_hasPathSum || right_hasPathSum);
}
// @lc code=end

