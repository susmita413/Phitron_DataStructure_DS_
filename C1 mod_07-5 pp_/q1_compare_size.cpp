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

int size_LL(Singly_node *head){
    int count=0 ;
    Singly_node *tmp = head ;
    while(tmp != NULL){
        count++ ;
        tmp= tmp->next ;
    }
    return count ;
}

void insert_at_tail(Singly_node *&head, Singly_node *&tail, int val){
    Singly_node *newNode = new Singly_node(val) ;
    if(head== NULL){
        head= newNode;
        tail= newNode ;
        return ;
    }
    tail->next = newNode ;
    tail= newNode ;
}

void print_LinkedList(Singly_node *head){
    Singly_node *tmp = head ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp= tmp->next ;
    }
}


int main(){
    Singly_node *head1 = NULL ;
    Singly_node *tail1 = NULL ;

    Singly_node *head2 = NULL ;
    Singly_node *tail2 = NULL ;

    int val ;
    while (true){
        cin >> val;
        if(val== -1) break ;
        insert_at_tail(head1, tail1 , val);
    }

    while (true){
        cin >> val;
        if(val== -1) break ;
        insert_at_tail(head2, tail2 , val);
    }
    if (size_LL(head1) == size_LL(head2)){
        cout<< "Yes" <<endl ;
    }
    else{
        cout<< "No" << endl;
    }

    return 0 ;
}

