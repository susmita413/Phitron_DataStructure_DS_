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

void print_LinkedList(Singly_node *head){
    cout<<" your linked list= " ;
    Singly_node *tmp = head; 
    while(tmp != NULL){
        cout << tmp->val << " " ;
        tmp= tmp->next ;
    }
    cout<< endl ;
}

void detect_Cycle(Singly_node *head){
    Singly_node *slow = head;
    Singly_node *fast = head;
    bool flag = false;
    while(fast !=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next ;
        if(slow== fast){
            flag= true;
            break;
        }
    }
    cout<< ((flag== true) ? "Cycle detected" : "No cycle" )  << endl ;
}

int main(){
    Singly_node *head = new Singly_node(10); 
    Singly_node *a = new Singly_node(20);
    Singly_node *b = new Singly_node(30);
    Singly_node *c = new Singly_node(40);
    Singly_node *d = new Singly_node(50);
    Singly_node *e = new Singly_node(60);
    Singly_node *f = new Singly_node(70);
    head->next = a;
    a->next= b;
    b->next= c ;
    c->next =d;
    d->next=b;
    // d->next=e;
    // e->next= f ;

    detect_Cycle(head);

    //print_LinkedList(head); //infinite loop if there is any cycle
    return 0 ;
}
