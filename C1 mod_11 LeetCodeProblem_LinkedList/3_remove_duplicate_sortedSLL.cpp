//1 my
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode *i= head;
        while(i->next != NULL){
            if(i->val == i->next->val){
                ListNode *delNode = i->next;
                i->next = i->next->next;
                delete delNode;
                continue;
            } 
            i= i->next ;
        }
        return head;
    }
};

//2 phitron
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode *i= head;
        
        while(i->next != NULL){
            if(i->val == i->next->val){
                i->next = i->next->next;
            } 
            if(i->next== NULL) break;
            else if(i->val != i->next->val){
                i= i->next ;
            }
        }
        return head;
    }
};