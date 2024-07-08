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


void insert_at_tail(Singly_node *&head, Singly_node *&tail,int v){ //O(1)
    Singly_node *newNode= new Singly_node(v) ;
    if(head == NULL){
        head = newNode;
        tail = newNode ;
        return ;
    }
    tail->next = newNode ;
    tail = newNode ;
}


void insert_head(Singly_node *&head, int v){  // O(1)
    Singly_node *newNode = new Singly_node(v) ;
    newNode->next = head;
    head = newNode ;
}

void insert_at_anyPosition(Singly_node *&head, int v, int pos){ // O(n)
    Singly_node *newNode = new Singly_node(v) ;
    if(head == NULL){
        newNode->next = head;
        head = newNode ; 
        return;
    }
    
    Singly_node *tmp = head ;
    for(int i=1; i<=pos-1; i++){  // i=1 theke niyar advantage=
                                  // i index = 'tmp' point kora index = pos-1 index
        tmp= tmp->next ;   
    }
    newNode->next = tmp->next ;
    tmp->next = newNode ;
}


void print_LinkedList(Singly_node *head){  // O(n)
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
    cout << "Tail-> " << tail->val << endl;

    int pos, val;
    cin >> pos >> val;
    
    if (pos > size(head)){
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0){           // 1st index 
        insert_head(head, val);
    }
    else if (pos == size(head)){  // (last  +1 ) Index
        insert_at_tail(head, tail, val);
    }
    else {                        // baki sob index
        insert_at_anyPosition(head, val, pos);
    }

    print_LinkedList(head);
    cout << "Tail-> " << tail->val << endl;
    return 0;


}
