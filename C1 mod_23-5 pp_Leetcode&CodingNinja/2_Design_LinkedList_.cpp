#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node(int val) {
            this->val= val;
            this->next= NULL;
        }
};
    
class MyLinkedList {
    public:
        Node* head=NULL;
        int sz=0;
        MyLinkedList() {
        
        }
        
        int get(int index) {
            if(index<0 || index>= sz) return -1;
            Node* tmp= head;
            for(int i=1; i<=index;i++){
                tmp= tmp->next;
            }
            return tmp->val;
        }
        
        void addAtHead(int val) {
            sz++ ;
            Node* nw = new Node(val);
            if(head==NULL){
                head= nw;
                return;
            }
            nw->next= head;
            head = nw;
        }
        
        void addAtTail(int val) {
            sz++ ;
            Node* nw= new Node(val);
            if(head==NULL){
                head= nw;
                return;
            }
            Node* tmp= head;
            while(tmp->next!=NULL){
                tmp= tmp->next;
            }
            tmp->next= nw;
        }
        
        void addAtIndex(int index, int val) {
            if(index==0){
               addAtHead(val);
               return; 
            }
            if(index==sz){
                addAtTail(val);
                return;
            }
            if(index> sz) return;
    
            sz++ ;
            Node* nw= new Node(val);
            Node* tmp= head;
            for(int i=1; i<=index-1;i++){
                tmp= tmp->next;
            }
            nw->next= tmp->next;
            tmp->next= nw;
        }
        
        void deleteAtIndex(int index) {
            if(index >= sz){
                return;
            }
    
            sz-- ;
            if(index==0){
                Node* del= head;
                head= head->next;
                delete del;
                return;
            }
    
            Node* tmp= head;
            for(int i=1;i<index;i++){
                tmp=tmp->next;
            }
            Node* del= tmp->next;
            tmp->next= tmp->next->next;
            delete del;
        }
    
};
    
    