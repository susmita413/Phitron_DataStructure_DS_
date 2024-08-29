class Solution {
public:
    void insert_atTail(ListNode* &head, ListNode* &tail, int val){
        ListNode *newNode = new ListNode (val);
        if(head == NULL){
            head= newNode;
            tail = newNode ; 
            return ;
        }
        tail->next = newNode;
        tail = newNode ;
    }

    void printList(ListNode *head){
        ListNode *tmp = head;
        while(tmp != NULL){
            cout<<tmp->val <<" " ;
            tmp= tmp->next;
        }
    }


    void reverse_main(ListNode *&head, ListNode *cur){
        if(cur->next == NULL){
            head = cur ;
            return;
        }
        reverse_main(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL ;
    }

    bool isPalindrome(ListNode* head) {
        ListNode *newHead = NULL;
        ListNode *newTail = NULL;
        ListNode *tmp= head ;
        while(tmp != NULL){
            insert_atTail(newHead, newTail, tmp->val);
            tmp= tmp->next ;
        }
        reverse_main(newHead, newHead) ;
        printList(newHead);
        
        ListNode *i = head;
        ListNode *j= newHead ;
        while(i != NULL){
            if(i->val != j->val){
                return false ;
            }
            i= i->next;
            j= j->next ;
        }
        return true;
    }
};