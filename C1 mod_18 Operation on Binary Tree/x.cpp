
#include<bits/stdc++.h>
using namespace std;

class Bnode {
public:
    int val;
    Bnode* left;
    Bnode* right;
    Bnode (int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrder (Bnode* root){
    queue<Bnode*> q;
    q.push(root);
    while(!q.empty()){
        Bnode* x= q.front();
        q.pop();
        cout<< x->val <<" ";
        
        if(x->left)
            q.push(x->left);
        if(x->right)
            q.push(x->right);
    }
}

int main(){
    Bnode* root = new Bnode(10);
    Bnode* a= new Bnode(20);
    Bnode* b= new Bnode(30);
    Bnode* c = new Bnode(40);
    Bnode* d= new Bnode(50);
    Bnode* e = new Bnode(60);
    Bnode* f = new Bnode(70);
    Bnode* g= new Bnode(80);
    Bnode* h= new Bnode(90);
    Bnode* i= new Bnode(100);
    Bnode* j= new Bnode(110);
    Bnode* k= new Bnode(1);
    Bnode* l= new Bnode(2);
    Bnode* m= new Bnode(3);
    Bnode* n= new Bnode(4);
    Bnode* o= new Bnode(200);
    Bnode* p= new Bnode(300);
    Bnode* q= new Bnode(400);
    Bnode* r= new Bnode(500);
    Bnode* s= new Bnode(600);
    Bnode* t= new Bnode(700);
    Bnode* u= new Bnode(800);

    root->left = a;
    root->right= b;

    a->left  = c;
    a->right =d;
    c->left= g;
    c->right = h;

    g->left= o;
    g->right= p;
    h->left= q;
    h->right= r;

    p->left= k;
    q->left = l;
    r->left= m;
    r->right= n;

    b->left= e;
    b->right = f;
    f->left= i;
    f->right= j;

    i->left= s;
    i->right= t;
    j->right= u;

    cout<< endl; 
    levelOrder(root);

    return 0 ;
}
/*
.........................root 10
....................../         \
...................a 20         b 30
.................../   \        /     \
................c 40   d 50    e 60   f 70
............../     \                  /   \
...........g 80      h90              i100   j110
........./    \      /   \            /   \      \
........o200  p300  q400  r500     s600   t700   u800
............../      /     /  \
............k 1     l 2   m 3  n 4  


*/