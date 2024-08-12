// delete any position, delete head, delete tail

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
    if(head==NULL){
        cout<<" Empty List\n" ; return ;
    }
    cout<< endl<<" print List: " ;
    Doubly_node *tmp =head ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp = tmp->next ;
    }
    cout<< endl ;
}
void print_Reverse_DLL(Doubly_node *tail){
    if(tail==NULL){
        cout<<" Empty List\n" ; return ;
    }
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

void delete_head (Doubly_node *&head,Doubly_node *&tail){
    if(head==NULL){
        cout<<" Empty List,Nothing to delete.\n" ; 
        return ;
    }

    Doubly_node *deleteNode = head ;
    head = head->next ;
    delete deleteNode ;
    if(head== NULL){
        tail = NULL ;
        return ;
    }
    head->prev =  NULL ;
}

void delete_tail(Doubly_node *&head,Doubly_node *&tail){
    if(head==NULL){
        cout<<" Empty List,Nothing to delete.\n" ;
        return ;
    }

    Doubly_node *deleteNode = tail ;
    tail= tail->prev ;
    delete deleteNode ;
    if(tail== NULL){
        head = NULL ;
        return ;
    }
    tail->next = NULL ;
}

void delete_anyPosition(Doubly_node *&head,Doubly_node *&tail,int pos){
    if(pos== 0){
        delete_head(head,tail) ; return ;
    }
    if(pos == sizeDLL(head)-1){
        delete_tail(head,tail);
        return ;
    }
    if(pos >= sizeDLL(head)){        // also handle head==NULL case
        cout<<" Invalid Position"<< endl ;
        return ;
    }

    Doubly_node *tmp =head ;
    for(int i=1; i<=pos-1; i++){
        tmp= tmp->next ;
    }
    Doubly_node *deleteNode = tmp->next ;
    tmp->next = tmp->next->next;
    tmp->next->prev= tmp ;
    delete deleteNode ; 
}

int main(){
    Doubly_node *head = new Doubly_node(10) ;
    Doubly_node *a = new Doubly_node(20) ;
    Doubly_node *b = new Doubly_node(30) ;
    Doubly_node *c = new Doubly_node(40) ;
    Doubly_node *tail = c;
    head->next = a;
    a->next =b ;
    b->next =c ;
    c->prev = b ;
    b->prev = a ;
    a->prev= head ;

    delete_anyPosition(head, tail, 2) ; //pos=0,1,2,3,invalid -WORK
    //delete_tail(head,tail) ;
    // delete_tail(head,tail) ;
    // delete_tail(head,tail) ;
    // delete_tail(head,tail) ;
    //
    delete_head(head,tail);
    delete_head(head,tail);
    delete_head(head,tail);
    delete_head(head,tail);
    delete_head(head,tail) ;

    delete_anyPosition(head, tail, 2) ;

    print_DLL(head);
    print_Reverse_DLL(tail);


    return 0 ;
}