#include<stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
/*
 * @lc app=leetcode.cn id=160 lang=c
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* tail_A;
    struct ListNode* tail_B;
    tail_A=headA,tail_B=headB;
    int len_A=0,len_B=0;
    //题目规定两链表都至少有一个节点
    //两个尾节点弄到最后面去,判断相不相交
    while(tail_A->next!=NULL){
        tail_A=tail_A->next;
        len_A++;
    }
    while(tail_B->next!=NULL){
        tail_B=tail_B->next;
        len_B++;
    }
    if(tail_A!=tail_B){
        return NULL;      //尾节点不同，则不相交
    }
    //相交的话继续往下。再把两节点弄回头节点
    tail_A=headA,tail_B=headB;
    //先假设链表a比b长
    if(len_A>len_B){
        while(len_A>len_B){
            tail_A=tail_A->next;
            len_A--;
        }
        while(tail_A!=tail_B){
            tail_A=tail_A->next;
            tail_B=tail_B->next;
        }
    }else{
        while(len_A<len_B){
            tail_B=tail_B->next;
            len_B--;
        }
        while(tail_A!=tail_B){
            tail_A=tail_A->next;
            tail_B=tail_B->next;
        }
    }
    //两尾节点随便返回个
    return tail_A;
}
// @lc code=end

