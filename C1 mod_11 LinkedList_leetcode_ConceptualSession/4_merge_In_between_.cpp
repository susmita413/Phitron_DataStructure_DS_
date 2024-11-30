// 1669. Merge In Between Linked Lists

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode *tmp1 = list1;
        // Find the (a-1)th node in list1 (the nodes after 'a' to be removed)
        for(int i=1; i<a ; i++){ 
            tmp1 = tmp1->next;
        }
        cout<< tmp1->val <<endl ; //13
        
        ListNode *tmp2 = tmp1->next;
        // Find the (b+1)th node in list1 (the nodes before 'b' to be removed)
        for(int i=a; i<=b; i++){ 
            tmp2 = tmp2->next;   
        }
        cout<< tmp2->val <<endl ; //5

        tmp1->next = list2; //Connect the (a-1)th node to the head of list2

        ListNode *tmp3 = list2; // Traverse to the last node of list2
        while(tmp3->next != NULL){
            tmp3 = tmp3->next;
        }
        cout<< tmp3->val <<endl ; //1000002

        tmp3->next= tmp2 ;// Connect the last node of list2 to the (b+1)th node

        return list1 ;
    }
};