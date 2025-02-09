#include<stdbool.h>
#include<stdio.h>
  struct ListNode {
      int val;
      struct ListNode *next;
  };
/*
 * @lc app=leetcode.cn id=141 lang=c
 *
 * [141] 环形链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    //一个节点或没有节点不成环
    if(head==NULL || head->next==NULL)return false;
    //定义一个快指针和一个慢指针
    struct ListNode* fast;
    struct ListNode* slow;
    fast=head;
    slow=head;

    while(fast->next!=NULL && fast->next->next!=NULL){
        //当快慢指针指向同一个节点，就有环
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)return true;
    }
    return false;
}
// @lc code=end

