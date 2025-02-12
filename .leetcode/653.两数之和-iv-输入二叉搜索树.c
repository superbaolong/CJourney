#include<stdbool.h>
#include<stdio.h>
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
/*
 * @lc app=leetcode.cn id=653 lang=c
 *
 * [653] 两数之和 IV - 输入二叉搜索树
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

void mid(struct TreeNode* root,int sort[10000],int *i){
    //中序遍历，得到的结果从小到大
    if(root==NULL){
        return;
    }
    mid(root->left,sort,i);
    sort[(*i)++]=root->val;
    mid(root->right,sort,i);
}
 
bool findTarget(struct TreeNode* root, int k) {
    if(root->left == NULL && root->right==NULL)return false; //只有一个节点
    int sort[10000];  //节点不超过10000个
    int i=0;
    mid(root,sort,&i);   //得到的i应该是节点个数
    if(sort[0]+sort[1]>k || sort[i-1]+sort[i-2]<k)return false;
    for(int j=0;j<i;j++){
        for(int a=i-1;a>j;a--){
            if(sort[j]+sort[a]==k)return true;  //找到了
        }
    }
    return false;
}
// @lc code=end

