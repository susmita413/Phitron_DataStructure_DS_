class Solution {
public:
    void insert_at_tail(ListNode *&head, ListNode *&tail,int v){
        ListNode *newNode= new ListNode(v) ;
        if(head == NULL){
            head = newNode;
            tail= newNode ;
            return ;
        }
        tail->next = newNode ;
        tail= newNode ;
    }

    ListNode* mergeNodes(ListNode* head) {
        ListNode *newhead= NULL;
        ListNode *newtail = NULL ;
        int val=0;
        ListNode *tmp= head->next; // Skip the initial zero node

        while(tmp != NULL){
            if(tmp->val == 0){
                // When a zero is encountered, insert the accumulated sum into the new list
                insert_at_tail(newhead, newtail,val);

                val=0;           // Reset the sum for the next segment
                tmp= tmp->next;
                continue;
            }
            val= val+ tmp->val ; // Accumulate the sum of values between zeros
            tmp= tmp->next;
        }
        return newhead ;         // Return the head of the new merged list
    }
};