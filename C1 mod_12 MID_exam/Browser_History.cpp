#include<bits/stdc++.h>
using namespace std;
class Doubly_node{
    public:
        string val;
        Doubly_node* next ;
        Doubly_node* prev ;
        Doubly_node (string val){
            this->val= val;
            this->next = NULL ;
            this->prev= NULL ;
        }
};

void print_DLL(Doubly_node *head){
    Doubly_node *tmp =head ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp = tmp->next ;
    }
    cout<< endl ;
}

void print_Reverse_DLL(Doubly_node *tail){
    Doubly_node *tmp = tail ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp = tmp->prev ;
    }
    cout<< endl ;
}

void insert_tail(Doubly_node *&head,Doubly_node *&tail, string val){
    Doubly_node *newNode = new Doubly_node(val) ;
    if(head== NULL){
        head = newNode;
        tail= newNode ;
        return ;
    }
    tail->next = newNode;
    newNode->prev = tail ;
    tail = newNode ;
}


int main(){
    Doubly_node *head= NULL;
    Doubly_node *tail= NULL;
    string val;
    while(true){
        cin>> val;
        if(val== "end") break ;
        insert_tail(head, tail, val) ;
    }
    
    int qu ;
    cin>> qu ;
    Doubly_node *cur = head ;
    
    for(int i=1; i<=qu; i++){
        cin>> val;
        if(val == "next"){
            if(cur->next ==NULL){
                cout<<"Not Available" <<endl ;
            }
            else{
                cur= cur->next ;
                cout<< cur->val <<endl;
            } 
        }
        else if(val=="prev"){
            if(cur->prev ==NULL){
                cout<<"Not Available" <<endl ;
            }
            else{
                cur= cur->prev ;
                cout<< cur->val <<endl;
            } 
        }
        else if(val== "visit"){
            string v;
            cin>> v;
            Doubly_node *tmp = head ;
            while(tmp != NULL && tmp->val != v){
                tmp= tmp->next ;
            }

            if(tmp != NULL && tmp->val ==v){
                cur= tmp;
                cout<< cur->val <<endl;
            }
            else{
                cout<<"Not Available" <<endl ;
            }
        }
    }
    return 0 ;
}