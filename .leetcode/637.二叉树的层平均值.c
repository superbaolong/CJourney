struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
/*
 * @lc app=leetcode.cn id=637 lang=c
 *
 * [637] 二叉树的层平均值
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
double* averageOfLevels(struct TreeNode* root, int* returnSize) {
    double* average[10000];   //节点最多10000个
    *returnSize=0;
    average[*returnSize]=root->val;
    
}
// @lc code=end

