//1290. Convert Binary Number in a Linked List to Integer
//
// The value of each node in the linked list is either 0 or 1. 
//The linked list holds the binary representation of a number.
//Return the decimal value of the number in the linked list.


class Solution {
public:
    int sizeLL(ListNode *head){
        ListNode* tmp = head;
        int cnt=0;
        while(tmp != NULL){
            cnt++ ;
            tmp= tmp->next;
        }
        return cnt;
    }
    
    int getDecimalValue(ListNode* head) {   //10101
        int sz = sizeLL(head);
        int x = pow(2,sz-1);  // Initialize the value of the most significant bit //2^4 = 16
        int ans =0;

        ListNode* tmp = head;
        while(tmp != NULL){
            if(tmp->val ==1){
                ans = ans+ x ; // Add the corresponding value if the bit is 1
            }                  // 0+ 16 + 4+1 
            tmp = tmp->next;
            x= x/2 ;           //16, 8, 4, 2, 1
        }
        return ans;            //21
    }
};