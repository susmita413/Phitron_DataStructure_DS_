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
    Doubly_node *head= NULL ;
    Doubly_node *tail = NULL ;
    int pos, val, step ;
    cout<<"Enter -1 to Exit\n" ;
    cout<<"Enter 0 to normal print & reverse print \n" ;
    cout<<"Enter 1 to insert any position\n" ;
    cout<<"Enter 2 to insert in head \n" ;
    cout<<"Enter 3 to insert in tail \n" ;
    cout<<"Enter 4 to delete from any position\n" ;
    cout<<"Enter 5 to delete from head \n" ;
    cout<<"Enter 6 to delete from tail \n" ;

    while(true){
        cout<<"\n  ENTER 1/2/3/4/5/6/0/-1 : " ;
        cin>> step ;
        if(step==0){
            print_DLL(head);
            print_Reverse_DLL(tail) ;
        }
        else if(step == -1){
            break ;
        }
        else if (step ==1){
            cout<< "give pos & val: " ;  cin>> pos>> val ;
            insert_anyPosition(head,tail,pos,val) ;
        }
        else if (step == 2){
            cout<< "give val: " ;  cin>> val ;
            insert_head(head,tail,val) ;
        }
        else if (step == 3){
            cout<< "give val: " ;  cin>> val ;
            insert_tail(head,tail,val) ;
        }
        else if (step ==4){
            cout<< "give pos : " ;  cin>> pos ;
            delete_anyPosition(head,tail,pos) ;
        }
        else if (step == 5){
            delete_head(head,tail) ;
        }
        else if (step == 6){
            delete_tail(head,tail) ;
        }

    }


}
