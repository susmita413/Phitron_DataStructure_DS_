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
Bnode* input_tree(){
    Bnode* root ;
    int rt;
    cin>> rt;  
    if(rt==-1) root= NULL;
    else root = new Bnode(rt); 
    queue<Bnode*> q;           //1. push root in QUEUE 
    if(root) q.push(root);
    while(!q.empty()){
        Bnode* p = q.front();  //2. peak 1 Node from QUEUE
        q.pop(); 
        Bnode* myleft; //3. Inside Work
        Bnode* myright;
        int l,r;
        cin>>l >>r;                  // enter LEFT and RIGHT value
        if(l==-1) myleft= NULL;
        else myleft= new Bnode(l);
        if(r==-1) myright= NULL;
        else myright= new Bnode(r);  // create LEFT and RIGHT node
        p->left = myleft;
        p->right= myright;       // connect Node to Peak node.
        if(p->left) q.push(p->left);  //4. push LEFT and RIGHT node in QUEUE
        if(p->right) q.push(p->right);
    }
    return root;
}

void print_outer_right_tree(Bnode* root){
    //if root has rightNode, then print RightNode value
    if(root->right){ 
        cout<< root->right->val <<" " ;
        print_outer_right_tree(root->right);
    }
    //if root has not rightNode, then print leftNode value
    else if(root->left){
        cout<< root->left->val <<" " ;
        print_outer_right_tree(root->left); 
        //As root hasn't rightNode,So, 
        //leftNode will be send in Recursion
    }
    //if root has no Node(root==Leaf node), then auto return
}

int main(){
    Bnode* root= input_tree();
    if(root){
        cout<< root->val<<" " ;
        print_outer_right_tree(root);
    }
    
    return 0;
}