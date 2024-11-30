// Intersection of Two Linked Lists

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        for(ListNode *tmp= headA; tmp!= NULL; tmp= tmp->next){
            for(ListNode *tmp2= headB; tmp2!= NULL; tmp2= tmp2->next){
                if(tmp== tmp2){
                    return tmp;
                }
            }
        }
        return NULL;
    }
};