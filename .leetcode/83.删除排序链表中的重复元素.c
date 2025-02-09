
 * @lc app=leetcode.cn id=83 lang=c
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start



struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* current;
    current=head;
    while(current!=NULL&& current->next != NULL){
        if(current->next->val!=current->val){
            current=current->next;
        }else{
            current->next=current->next->next;
        }
    }
    return head;
}
// @lc code=end

