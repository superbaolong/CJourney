#include<stdio.h>
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };

/*
 * @lc app=leetcode.cn id=530 lang=c
 *
 * [530] 二叉搜索树的最小绝对差
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


int min_diff=100000;  //记录最小差值

void mid_order(struct TreeNode* root,int* a,int *num){   //中序遍历
    if(root==NULL)return;
    mid_order(root->left,a,num);
    a[(*num)++]=root->val;    
    mid_order(root->right,a,num);
}

int getMinimumDifference(struct TreeNode* root) {
    int a[10000];   //数组记录所有节点的值
    min_diff=100000;
    int num=0;
    mid_order(root,a,&num);
    for(int i=0;i<num-1;i++){
        if(a[i+1]-a[i]<min_diff)min_diff=a[i+1]-a[i];
    }
    return min_diff;
}
// @lc code=end

