#include<stdio.h>
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
/*
 * @lc app=leetcode.cn id=563 lang=c
 *
 * [563] 二叉树的坡度
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

int abs(int x){ //x的绝对值
    return (x>0)?x:-x;
}

int sum_nodes(struct TreeNode* root,int* sum){  //树所有节点之和
    if(root==NULL)return 0;
    int left_sum=sum_nodes(root->left,sum);
    int right_sum=sum_nodes(root->right,sum);
    *sum+=abs(left_sum-right_sum);
    return root->val+left_sum+right_sum;
}


int findTilt(struct TreeNode* root) {
    int sum=0;
     sum_nodes(root,&sum);
     return sum;
}
// @lc code=end

