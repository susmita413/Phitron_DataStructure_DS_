#include<bits/stdc++.h>
using namespace std;

class Bnode{
public:
    int val;
    Bnode *left;
    Bnode *right;
    Bnode (int val){
        this->val =  val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrder(Bnode *root){  //root->left->right
    if(root==NULL){  //base case // for Leaf Node
        return;
    }
    cout<< root->val<< " " ; // root of Every Subtree
    preOrder(root->left);    // left subtree
    preOrder(root->right);   // right subtree
}

void postOrder(Bnode *root){ // left->right->root
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<< root->val <<" " ;
}

void inOrder(Bnode *root){  // left->root->right
    if(root == NULL) return;  

    inOrder(root->left);
    cout<< root->val<< " " ;
    inOrder(root->right);
}

int main(){
    Bnode *root = new Bnode(10);
    Bnode *a= new Bnode(20);
    Bnode *b= new Bnode(30);
    Bnode *c= new Bnode(40);
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
    
    cout<< "PreOrder : " ;
    preOrder(root);

    cout<< endl <<"PostOrder: " ;
    postOrder(root);

    cout<< endl <<"InOrder: " ;
    inOrder(root);

    cout<< endl ;

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