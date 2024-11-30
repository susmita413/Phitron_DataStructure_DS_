// 24. Swap Nodes in Pairs

class Solution {
public:
// swap with modifying the values in the list's nodes

    ListNode* swapPairs(ListNode* head) {
        // If the list is empty or has only one node, no swaps are needed
        if(head ==NULL || head->next==NULL){
            return head;
        }

        ListNode *tmp1 = head;
        ListNode *tmp2 = head->next;

        while(tmp1 != NULL && tmp2 !=NULL){
            swap(tmp1->val, tmp2->val) ; // Swap values of the current pair
            tmp1 = tmp1->next->next;     // Move to the next pair
            if(tmp1 ==NULL){             // Check if the next pair exists
                break;
            }
            tmp2 = tmp2->next->next;     // Update 2nd pointer in the new pair
        }
        return head;
    }
};