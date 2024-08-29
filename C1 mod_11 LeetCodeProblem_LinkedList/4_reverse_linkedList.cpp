class Solution {
public:
    void reverse_main(ListNode *&head, ListNode *cur){
        if(cur->next == NULL){
            head = cur ;
            return;
        }
        reverse_main(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL ;
    }
   
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        reverse_main(head, head);
        return head;
    }
};