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

int sum=0 ;
void sumOf_leaf(Bnode* root){ //1st way
    if(root==NULL) return; 
    //if a node have 1child, then its left/right= NULL
    if(root->left==NULL && root->right==NULL){ //leaf Node
        sum= sum+ root->val;
        return;
    }
    sumOf_leaf(root->left);
    sumOf_leaf(root->right);
}

// with take Reference 
void sumOf_leaf2(Bnode* root, int &sum2){ //2nd way
    if(root==NULL) return; 
    if(root->left==NULL && root->right==NULL){ 
        sum2= sum2+ root->val;
        return;
    }
    sumOf_leaf2(root->left,sum2);
    sumOf_leaf2(root->right,sum2);
}


int main(){
    Bnode* root= input_tree();
    sumOf_leaf(root);
    cout<<endl<<"sum Of leaf nodes: "<<sum <<endl;

    int sum2=0;
    sumOf_leaf2(root,sum2);
    cout<<"sum Of leaf nodes(2nd Way): "<<sum2 <<endl;

}