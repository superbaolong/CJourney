/*
 * @lc app=leetcode.cn id=94 lang=c
 *
 * [94] 二叉树的中序遍历
 */

  struct TreeNode {
     int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
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

void inorder(struct TreeNode* root,int result[1000],int* returnSize){
    if(!root){
        return;
    }
    inorder(root->left,result,returnSize);
    result[(*returnSize)++]=root->val;
    inorder(root->right,result,returnSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(1000 * sizeof(int));
    *returnSize=0;
    inorder(root,result,returnSize);
    return result;
}
// @lc code=end

