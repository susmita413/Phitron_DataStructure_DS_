#include <bits/stdc++.h> 

class Node {
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Queue {
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz=0;

    Queue() {
        // Implement the Constructor
    }

    bool isEmpty() {
        if(sz==0) return true;
        else return false;
    }

    void enqueue(int data) {//push
        sz++ ;
        Node *newNode = new Node(data);
        if(head== NULL){
            head= newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail= tail->next;
    }

    int dequeue() { //pop
        if(sz==0) return -1;

        sz-- ;
        Node *delN = head;
        int d = head->data;
        head= head->next;
        delete delN;  
        return d;
    }

    int front() {
        if(sz==0) return -1;
        else return head->data;
    }
};