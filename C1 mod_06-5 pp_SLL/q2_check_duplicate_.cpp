#include<bits/stdc++.h>
using namespace std;

class Singly_node{
    public:
        int val ;
        Singly_node *next ;
        Singly_node (int val){
            this->val = val ;
            this->next = NULL ;
        }
};

void insert_at_tail(Singly_node *&head, Singly_node *&tail, int val){
    Singly_node *newNode = new Singly_node(val) ;
    if(head == NULL){
        head= newNode ;
        tail = newNode ;
        return ;
    }
    tail->next = newNode ;
    tail = newNode ;
}


void check_Duplicate(Singly_node *head){
    Singly_node *tmp = head ;
    int frq_ar [101] ={0} ;

    while(tmp != NULL){
        int x= tmp->val ;
        frq_ar[x]= frq_ar[x]+1 ;
        tmp= tmp->next ;
    }
    int flag =0 ;
    for(int i=0; i<101; i++ ){
        if(frq_ar[i] >1){
            cout<<" Yes" <<endl ;
            flag=1 ;
            break ;
        }
    }
    if(flag==0){
        cout<< " No " << endl ;
    }
}


void printLL(Singly_node *head){
    Singly_node *tmp =head ;
    while(tmp != NULL){
        cout << tmp->val << " " ;
        tmp= tmp->next ;
    }
    cout<< endl ;
}


int main(){
    Singly_node *head = NULL ; 
    Singly_node *tail = NULL ;

    int val ;
    while(true){
        cin>> val ;
        if(val==-1) break;
        insert_at_tail(head, tail,val); //O(1)
    }
    
    printLL(head) ; 
    cout<< endl<< " have any duplicate value? "<< endl ;
    check_Duplicate(head) ;


    return 0;

}