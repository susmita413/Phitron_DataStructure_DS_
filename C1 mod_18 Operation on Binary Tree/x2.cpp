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

Bnode* input_tree(){
    Bnode* root;
    cout<< " enter root: "<<endl;
    int rt;
    cin>>rt;
    if(rt==-1) root= NULL;
    else  root= new Bnode(rt);
    queue<Bnode*> q;
    if(root) q.push(root);

    while(!q.empty()){
        Bnode* p= q.front() ;
        q.pop();

        cout<<"enter left and right value of "<< p->val <<endl;
        int l,r;
        cin>>l >>r ;
        Bnode* myleft, *myright;
        if(l==-1) myleft= NULL;
        else myleft= new Bnode(l);
        if(r==-1) myright= NULL;
        else myright= new Bnode(r);
        p->left= myleft;
        p->right= myright;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

int main(){

    Bnode* root= input_tree(); 
    cout <<endl << "level Order Print: " << endl;
    levelOrder(root);

    return 0 ;
}

/*
................10
............../     \
.......... 20        30
........./   \       /  \
..... 40      90    -1   50
...../ \     /  \       /   \
...-1  60   -1  100    70    80
......./ \      / \    / \    / \
......-1 -1    -1 -1  -1 -1  -1  -1

Input : 
10
20 30
40 90 -1 50
-1 60 -1 100 70 80
-1 -1 -1 -1 -1 -1 -1 -1

*/