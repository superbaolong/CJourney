#include<stdio.h>
#include<stdbool.h>
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
/*
 * @lc app=leetcode.cn id=110 lang=c
 *
 * [110] 平衡二叉树
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

//绝对值函数
int jueduizhi(int x){
    return (x>0)?x:-x;
}
//max函数
int max(int a,int b){
    return(a>b)?a:b;
}
//看树的深度
int seek_depth(struct TreeNode* root,int depth){
    if(root==NULL){
        return depth-1;       //空节点深度为0
    }
    int left_depth=seek_depth(root->left,depth+1);
    int right_depth=seek_depth(root->right,depth+1);
    return max(left_depth,right_depth);
}
//是否平衡
bool isBalanced(struct TreeNode* root) {
    if(root==NULL)return true;
    ////左右子树深度差的绝对值
    int difference;  
    difference=jueduizhi(seek_depth(root->left,1)-seek_depth(root->right,1));
    //判断每个节点深度差是否<=1
    if(difference>1){
        return false;
    }else{
        bool left_balance = isBalanced(root->left);
        bool right_balance = isBalanced(root->right);
        return left_balance && right_balance;
    }
}
// @lc code=end

