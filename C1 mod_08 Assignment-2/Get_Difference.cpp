// print difference between min and max

#include<bits/stdc++.h>
using namespace std;

class Singly_node{
    public:
        int val; 
        Singly_node *next ;
        Singly_node(int val){
            this->val = val ;
            this->next =NULL; 
        }
};

void insert_at_tail(Singly_node *&head, Singly_node *&tail, int val){
    Singly_node *newNode = new Singly_node(val) ;
    if(head == NULL){
        head = newNode;
        tail = newNode ;
        return ;
    }
    tail->next = newNode ;
    tail = newNode;
}


int check_Maximum(Singly_node *head){
    int max_val = INT_MIN ;
    for(Singly_node *i=head; i != NULL ; i=i->next){
        if(max_val < i->val){
             max_val = i->val ;
        }
    }
    return max_val ;
}


int check_Minimum(Singly_node *head){
    int min_val = INT_MAX ;
    for(Singly_node *i=head; i != NULL ; i=i->next){
        if(min_val > i->val){
             min_val = i->val ;
        }
    }
    return min_val ;
}



int main(){
    Singly_node *head = NULL ;
    Singly_node *tail = NULL ;

    int val ;
    while(true){
        cin>> val ;
        if(val == -1) break ;
        insert_at_tail(head, tail, val);
    }
    
    int mx= check_Maximum(head) ;
    int mn= check_Minimum(head) ;
    cout<< mx-mn << endl ;
    
    return 0 ;
}