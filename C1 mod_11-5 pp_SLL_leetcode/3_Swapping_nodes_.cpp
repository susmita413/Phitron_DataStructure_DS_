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

    void printLL(ListNode *head){
        ListNode *tmp =head ;
        while(tmp != NULL){
            cout<< tmp->val <<" " ;
            tmp= tmp->next ;
        }
    }

    ListNode* swapNodes(ListNode* head, int k) {   // 'k' is for 1 based index
        // Calculate the positions of the nodes to swap
        int pos1 = k - 1; // Position from the beginning (0-based index)
        int pos2 = sizeLL(head) - k; // Position from the end (0-based index)
        ListNode *i = head; // Pointer for the k-th node from the beginning
        ListNode *j = head; // Pointer for the k-th node from the end

        // If the nodes to be swapped are the first and last nodes in the list
        if (pos1 == 0 && pos2 == sizeLL(head) - 1) {
            // Move 'j' to the last node
            for (int t = 1; t <= pos2; t++) {
                j = j->next;
            }
        } 
        else {
            // Move 'i' to the k-th node from the beginning
            for (int t = 1; t <= pos1; t++) {
                i = i->next;
            }
            // Move 'j' to the k-th node from the end
            for (int t = 1; t <= pos2; t++) {
                j = j->next;
            }
        }

        
        swap(i->val, j->val);
        printLL(head);
        return head;
    }
};