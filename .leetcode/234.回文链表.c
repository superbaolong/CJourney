#include <stdbool.h>
#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

/*
 * @lc app=leetcode.cn id=234 lang=c
 *
 * [234] 回文链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if (!head || !head->next) return true; // 空链表或单节点链表一定是回文

    // 快慢指针找到链表的中点
    struct ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // 翻转后半部分链表
    struct ListNode *prev = NULL, *curr = slow, *next = NULL;
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // 比较前半部分和后半部分
    struct ListNode *p1 = head, *p2 = prev; // prev 是后半部分翻转后的头
    while (p2) { // 后半部分长度不超过前半部分
        if (p1->val != p2->val) {
            return false; // 如果值不相等，则不是回文链表
        }
        p1 = p1->next;
        p2 = p2->next;
    }

    return true; // 所有值相等，返回 true
}
// @lc code=end
