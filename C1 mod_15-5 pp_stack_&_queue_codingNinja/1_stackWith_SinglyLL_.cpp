#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Stack {
public:
    Node *head = NULL;
    int sz=0 ;
    Stack(){
        //Write your code here
    }

    int getSize(){
        return sz;
    }

    bool isEmpty(){
        if(sz==0) return true;
        else return false;
    }

    void push(int data){
        sz++ ;
        Node *newNode = new Node(data);
        if(head == NULL){
           head =newNode;
           return;
        }
        newNode->next =head;
        head = newNode;
    }

    void pop(){
       if(sz != 0){
           sz-- ;
           Node *delNode = head;
           head = head->next;
           delete delNode;
        }
    }

    int getTop(){
        if(sz==0) return -1;
        else return head->data;
    }
};

int main(){

    return 0 ;
}