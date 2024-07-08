#include<bits/stdc++.h>
using namespace std;

class Singly_node{  // node create
    public:
        int val ;
        Singly_node* next ;
        Singly_node(int val){
            this->val = val ;
            this->next= NULL ;
        }
};

void insert_at_tail(Singly_node *&head, int v){
    // 1st node add korar time head change kora lagbe.
    // tai reference nibo
    Singly_node *newNode = new Singly_node(v) ;

    if(head == NULL){   // Condition of adding 1st node
        head= newNode ;
        cout<<" inserted head ." << endl ;
        return ;
    }
    Singly_node *tmp = head ;
    while(tmp->next != NULL){
        tmp= tmp->next ;
    }
    tmp->next = newNode ; // 1st node er por theke bakigula add krbe
    cout<< "Inserted AT Tail" << endl ;

}


void print_Linked_list(Singly_node *head ){ 
    cout<<" YOUR LINKED LIST : " ;
    Singly_node *tmp = head ;
    while(tmp != NULL){
        cout<< tmp->val <<" " ;
        tmp = tmp->next ;
    }
    cout<< endl ;
}


int main(){
    Singly_node* head = NULL ;

    insert_at_tail(head, 10) ;
    insert_at_tail(head, 20) ;
    insert_at_tail(head, 300) ;
    
    print_Linked_list(head) ;

    return 0 ;
}