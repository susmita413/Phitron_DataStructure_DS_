//1
class Solution {
public:
    void delete_at_position(ListNode* &head,int pos){
        if(pos==0){
            head= head->next;
            return ;
        }
        ListNode *tmp =head ;
        for(int i=1; i<=pos-1; i++){
            tmp= tmp->next ;
        }
        tmp->next= tmp->next->next;
    }

    ListNode* removeElements(ListNode* head, int val) {
        int pos=0;
        ListNode *tmp =head ;
        while(tmp != NULL){
            if(tmp->val == val){
                delete_at_position(head, pos);
                tmp= head; // Restart from the head if the head was deleted
                pos=0 ;    // Reset position counter
                continue;
            }
            tmp= tmp->next;
            pos++ ;
        }
        return head;
    }
};