// 2807. Insert Greatest Common Divisors in Linked List

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *tmp =head;
        while(tmp->next != NULL){
            int gcd = __gcd(tmp->val, tmp->next->val);
            cout<< gcd <<endl;
            
            ListNode *newNode = new ListNode(gcd);
            newNode->next = tmp->next;  //connection
            tmp->next = newNode;
            tmp= tmp->next->next;       // increment
        }
        return head;
    }
};