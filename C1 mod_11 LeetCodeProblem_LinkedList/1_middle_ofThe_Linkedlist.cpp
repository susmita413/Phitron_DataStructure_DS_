//1
class Solution {
public:

    int sizeLL(ListNode *head){
        ListNode *tmp= head;
        int cnt=0 ;
        while(tmp != NULL){
            cnt++ ;
            tmp= tmp->next;
        }
        return cnt ;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode *tmp= head;
        int sz= sizeLL(head) ;
        cout<<"i = " ;
        for(int i=1; i<=sz/2; i++){
            cout<<i << " ";
            tmp= tmp->next ;
        }
        
        return tmp ;
    }
};

//2
class Solution {
public:

    ListNode* middleNode(ListNode* head) {
        ListNode *slow= head;
        ListNode *fast= head;
        while(fast != NULL && fast->next != NULL){
            slow= slow->next;
            fast= fast->next->next;
        }
        cout<< slow->val << endl;
        return slow;
    }
};