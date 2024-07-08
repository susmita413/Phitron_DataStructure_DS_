// index / position = 0  1  2  3  4  ...
// value ..........= 10 20 30 40 50 ...

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

void insert_at_tail(Singly_node *&head, int v){
    Singly_node *newNode= new Singly_node(v) ;
    if(head == NULL){
        head = newNode;
        cout<<" Inserted in HEAD" << endl ;
        return ;
    }
    
    Singly_node *tmp = head ;
    while(tmp->next != NULL){
        tmp = tmp->next ;
    }
    tmp->next = newNode ;
    cout<<" Inserted at tail" <<endl ;
}


void insert_head(Singly_node *&head, int v){
    Singly_node *newNode = new Singly_node(v) ;

    newNode->next = head;
    head = newNode ;
}

void insert_at_anyPosition(Singly_node *&head, int v, int pos){
    if(pos==0){
        insert_head(head, v) ;  
        return;
    }
    Singly_node *newNode = new Singly_node(v) ;
    Singly_node *tmp = head ;
    for(int i=1; i<=pos-1; i++){  // i=1 theke niyar advantage=
                                  // i index = 'tmp' point kora index
        tmp= tmp->next ;   
    }
    newNode->next = tmp->next ;
    tmp->next = newNode ;
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
    Singly_node *head = NULL ;

    while(true){
        cout<< "Option-1: Print Linked List"<<endl ;
        cout<< "Option-2: Terminate"<<endl ;
        cout<< "Option-3: Insert at tail, give value"<<endl ;
        cout<< "Option-4: Insert at any POSITION, give position and value"<<endl ;
        cout<< "Option-5: Insert at head, give value"<<endl ;

        int op;  cin>> op ;
        if(op==1){
            print_LinkedList(head) ;
        }
        else if(op==2){
            break ;
        }
        else if(op==3){
            cout<<" give value= "  ;
            int val;  cin>> val ;
            insert_at_tail(head, val) ;
        }

        else if(op==4){
            cout<< "give position and value = " ;
            int pos, val ;
            cin>> pos >> val ;
            insert_at_anyPosition(head, val, pos) ;
        }

        else if(op==5){
            cout<<" give value= "  ;
            int val;  cin>> val ;
            insert_head(head,val) ;
        } 
    }
    

    return 0 ;
}