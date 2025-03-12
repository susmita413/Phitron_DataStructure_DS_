#include<bits/stdc++.h>
using namespace std;

class Bnode{
public:
    int val;
    Bnode* left ;
    Bnode* right;
    Bnode(int val){
        this->val = val; 
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrder(Bnode *root){
    if(root==NULL){
        cout<< " tree Empty."<<endl;
        return;
    }
    queue<Bnode*> q;
    q.push(root);      //1. push root node
    while(!q.empty()){
        Bnode *x= q.front();  // 2. peak 1 front Node
        cout<< x->val <<" " ; // 3. print and Pop ( inside work)
        q.pop() ;              

        if(x->left)           // 4. push its child
            q.push(x->left);
        if(x->right)
            q.push( x->right);
    }

}

int main(){
    Bnode *root = new Bnode(10); //all node
    Bnode *a = new Bnode(20);
    Bnode *b = new Bnode(30);
    Bnode *c = new Bnode(40);
    Bnode *d = new Bnode(50);
    Bnode *e = new Bnode(60);
    Bnode *f = new Bnode(70);
    Bnode *g = new Bnode(80);
    Bnode *h = new Bnode(90);
    Bnode *i = new Bnode(100);

    root->left = a;  // connection
    root->right = b;
    a->left = c;
    a->right = h;
    b->right= d;

    c->right = e;
    h->right = i;

    d->left = f;
    d->right = g;

    cout<< endl;
    levelOrder(root);

    return 0 ;
}

/*
................10
............../     \
..........a 20     b 30
........./   \          \
.....c 40     h 90       d 50
......\         \          /  \
.....e 60      i 100     f 70  g 80


*/