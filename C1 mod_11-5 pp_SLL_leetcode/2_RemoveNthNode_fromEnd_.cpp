class Solution {
public:
    int sizeLL(ListNode *head){
        int count =0 ;
        ListNode *tmp =head ;
        while(tmp != NULL){
            tmp= tmp->next ;
            count++ ;
        }
        return count;
    }

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

    void printLL(ListNode *head){
        ListNode *tmp =head ;
        while(tmp != NULL){
            cout<< tmp->val <<" ";
            tmp= tmp->next ;
        }
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int pos = sizeLL(head) -n ;
        delete_at_position(head, pos);
        
        printLL(head);
        return head;
    }
};

//2 - slow fast technique- not use in phitron
class Solution {
public:
    void printLL(ListNode *head){
        ListNode *tmp =head ;
        while(tmp != NULL){
            cout<< tmp->val <<" ";
            tmp= tmp->next ;
        }
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow = head;
        ListNode *fast = head ;

        for(int i=0; i<n ; i++){
            fast = fast->next ;
        }
        if(fast ==NULL){
           return head->next ;
        }
        while(fast->next != NULL){
            fast= fast->next;
            slow= slow->next;
        }

        slow->next = slow->next->next;

        printLL(head) ;
        return head;
    }
};

