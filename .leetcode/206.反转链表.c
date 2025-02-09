#include<stdio.h>
struct ListNode {
      int val;
      struct ListNode *next;
};

/*
 * @lc app=leetcode.cn id=206 lang=c
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;      // 前一个节点，初始为NULL
    struct ListNode* current = head;  // 当前节点，从头节点开始
    struct ListNode* next = NULL;     // 下一个节点，暂存当前节点的next

    while (current != NULL) {
        next = current->next;  // 暂存当前节点的下一个节点
        current->next = prev;  // 将当前节点的next指向前一个节点（反转）
        prev = current;        // 前移prev指针
        current = next;        // 前移current指针
    }

    return prev;  // prev指向反转后的新头节点
}

// @lc code=end

