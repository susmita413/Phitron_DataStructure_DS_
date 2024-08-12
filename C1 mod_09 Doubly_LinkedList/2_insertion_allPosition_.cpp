// insert any position : insert head, tail, any mid position,
// invalid position

#include<bits/stdc++.h>
using namespace std;
class Doubly_node{
    public:
        int val;
        Doubly_node* next ;
        Doubly_node* prev ;
        Doubly_node (int val){
            this->val= val;
            this->next = NULL ;
            this->prev= NULL ;
        }
};

void print_DLL(Doubly_node *head){
    cout<< endl<<" print List: " ;
    Doubly_node *tmp =head ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp = tmp->next ;
    }
    cout<< endl ;
}
void print_Reverse_DLL(Doubly_node *tail){
    cout<< endl<<" print reverse List: " ;
    Doubly_node *tmp = tail ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp = tmp->prev ;
    }
    cout<< endl ;
}
int sizeDLL(Doubly_node *head){
    Doubly_node *tmp =head ;
    int cnt=0 ;
    while(tmp!= NULL){
        cnt++ ;
        tmp= tmp->next ;
    }
    return cnt ;
}

void insert_head(Doubly_node *&head,Doubly_node *&tail,int val){
                 //position = 0
    Doubly_node *newNode = new Doubly_node(val) ;
    if(head== NULL){
        head = newNode;
        tail= newNode ;
        return ;
    }
    newNode->next = head ;
    head->prev = newNode;
    head= newNode ;
}

void insert_tail(Doubly_node *&head,Doubly_node *&tail, int val){
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

void insert_anyPosition(Doubly_node *&head, Doubly_node *&tail, int pos, int val){
    if(pos==0){
        insert_head(head, tail,val) ; 
        return ;
    }
    if(pos== sizeDLL(head)){
        insert_tail(head,tail, val) ;
        return ;
    }
    if(pos> sizeDLL(head)){
        cout<<" invalid position."<<endl ; 
        return ;
    }
    Doubly_node *newNode = new Doubly_node(val) ;
    Doubly_node *tmp = head ;
    for(int i=1; i<=pos-1; i++){
        tmp= tmp->next ;
    }
    newNode->next = tmp->next;
    tmp->next = newNode ; // single linked list done
    newNode->prev = tmp ;
    newNode->next->prev = newNode ; //reverse link done
}


int main(){
    Doubly_node *head= NULL ;
    Doubly_node *tail = NULL ;
    
    insert_tail(head,tail, 100) ;
    insert_tail(head,tail, 200) ;
    insert_tail(head,tail, 300) ;
    //
    insert_head(head,tail, 3000) ;
    insert_head(head,tail, 2000) ;
    insert_head(head,tail, 1000) ;
    insert_anyPosition(head,tail,2,10) ;//pos= 0,1,2,3,invalid -WORK

    print_DLL(head);
    print_Reverse_DLL(tail) ;
    
    return 0 ;

}