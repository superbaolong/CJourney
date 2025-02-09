#include<stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
/*
 * @lc app=leetcode.cn id=111 lang=c
 *
 * [111] 二叉树的最小深度
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
    return(x<y)?x:y;
}

int seek_depth(struct TreeNode* root,int depth){
    //左右都空，返回depth
    if(root->left==NULL && root->right==NULL)return depth;
    // 如果左子树为空，递归计算右子树的深度
    if (root->left == NULL) {
        return seek_depth(root->right, depth + 1);
    }
    // 如果右子树为空，递归计算左子树的深度
    if (root->right == NULL) {
        return seek_depth(root->left, depth + 1);
    }
    //左右都不空，返回左右中小的
    int left_depth=seek_depth(root->left,depth+1);
    int right_depth=seek_depth(root->right,depth+1);
    return min(left_depth,right_depth);
}

int minDepth(struct TreeNode* root) {
    if(root==NULL)return 0;
    return seek_depth(root,1);
}
// @lc code=end