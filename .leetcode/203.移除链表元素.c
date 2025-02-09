#include<stdio.h>
struct ListNode {
      int val;
      struct ListNode *next;
};
/*
 * @lc app=leetcode.cn id=203 lang=c
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(head==NULL)return head;
    while(head != NULL && head->val == val){
        head=head->next;
    }
    if(head==NULL)return head;
    struct ListNode*tail;
    tail=head;
    while(tail!=NULL && tail->next!=NULL){
        if(tail->next->val==val){
            tail->next=tail->next->next;
        }else{
            tail=tail->next;
        }
    }
    return head;
}
// @lc code=end

