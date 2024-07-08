#include<bits/stdc++.h>
using namespace std;

class Singly_node{
    public:
        int val;
        Singly_node *next ;
        Singly_node(int val){
            this->val = val ;
            this->next = NULL ;
        }
};

int size(Singly_node *head){  // O(n)
    Singly_node *tmp = head;
    int count = 0;
    while (tmp != NULL){
        count++ ;
        tmp = tmp->next;
    }
    return count;
}


void delete_head(Singly_node *&head){
    if(head == NULL){
        cout<< " head is not available" <<endl ; return ;
    }
    Singly_node *deleteNode =head ;
    head= head->next ;
    delete deleteNode ;
    cout<<" deleted Head"<< endl ;
}

void delete_from_position(Singly_node *&head, int pos){ // O(n)
    if(pos==0){
        delete_head(head);  return ;
    }
    Singly_node *tmp =head ;
    for(int i=1; i<=pos-1; i++){  
        tmp= tmp->next ;         // i index = 'tmp' point kora index = pos-1 index
        if(tmp== NULL){          // pos onek boro dewa hole
            cout<<" Invalid position" << endl ;
            return ;
        }
    }
    if(tmp->next == NULL){      // pos= last index+1 dewa hole
        cout<<" Invalid position" << endl ;  return ;
    }
    Singly_node *deleteNode = tmp->next ;
    tmp->next = tmp->next->next ;
    delete deleteNode ;
    cout<<" deleted index " <<pos << endl ;
}


void print_LinkedList(Singly_node *head){
    cout<<" your linked list= " ;
    Singly_node *tmp = head; 
    while(tmp != NULL){
        cout << tmp->val << " " ;
        tmp= tmp->next ;
    }
    cout<< endl ;
}

int main(){
    Singly_node *head = new Singly_node(10);
    Singly_node *a = new Singly_node(20);
    Singly_node *b = new Singly_node(30);
    Singly_node *c = new Singly_node(40);
    Singly_node *d = new Singly_node(50);
    Singly_node *tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    print_LinkedList(head);

    int pos;
    cin >> pos;
    
    if (pos >= size(head)){
        cout << "Invalid Index" << endl;
    }
    
    else if (pos < size(head)){  
        delete_from_position(head, pos);
    }
    
    print_LinkedList(head);

    return 0 ;



}
