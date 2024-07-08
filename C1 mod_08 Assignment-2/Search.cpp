// search X's index , if present then print its index

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


void search_print(Singly_node *head, int x){
    Singly_node *tmp = head ;
    int flag=0, pos=0 ;
    while(tmp != NULL){
        if(tmp->val == x){
            flag =1 ;
            break ;
        }
        pos++ ;
        tmp= tmp->next ;
    }
    if(flag == 0){
        cout << "-1" <<endl ;
    }
    else{
        cout << pos << endl ;
    }

}


int main(){

    int test;  
    cin>> test ;
    for(int i=1; i<=test ; i++){
        Singly_node *head = NULL ;
        Singly_node *tail = NULL ;

        int val, x ;
        while(true){
            cin>> val ;
            if(val == -1) break ;
            insert_at_tail(head, tail, val);
        }
        cin>> x;
        search_print(head, x) ;
    }

    
    
    
    
    return 0 ;
}