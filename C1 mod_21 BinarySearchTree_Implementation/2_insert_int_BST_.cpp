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
    queue<Bnode*> q;          
    if(root) q.push(root);
    while(!q.empty()){
        Bnode* p = q.front(); 
        q.pop(); 
        int l,r;              
        cin>>l >>r;                  
        if(l==-1) p->left= NULL;
        else p->left= new Bnode(l);
        if(r==-1) p->right= NULL;
        else p->right= new Bnode(r);  
        if(p->left) q.push(p->left);  
        if(p->right) q.push(p->right);
    }
    return root;
}

void levelOrder(Bnode *root){
    if(root==NULL){
        cout<< " tree Empty."<<endl;
        return;
    }
    queue<Bnode*> q;
    q.push(root);      
    while(!q.empty()){
        Bnode *x= q.front();  
        cout<< x->val <<" " ; 
        q.pop() ;              
        if(x->left)  q.push(x->left);
        if(x->right) q.push( x->right);
    }

}

bool search_inBST(Bnode* root,int x){ 
    if(root==NULL) return false;  
    if(root->val==x) return true;
    if(x< root->val)
        return search_inBST(root->left,x);  
    else
        return search_inBST(root->right,x);  
}

void insert_inBST(Bnode* &root, int x){
    if(root==NULL){
        root= new Bnode(x);   //for Emptytree- BASE case
        return;
    }               
    if(x< root->val){
        if(root->left==NULL)
            root->left= new Bnode(x);
        else
            insert_inBST(root->left,x);
    }
    else{   // x> root->val
        if(root->right== NULL)
            root->right= new Bnode(x);
        else 
            insert_inBST(root->right,x);
    }
}


int main(){
    Bnode* root= input_tree();
    cout<<"enter Insert value: " ;
    for(int i=1; i<=5; i++){  //O(N*height)= O(N^2) or O(N*logN)
        int k; cin>>k ;
        insert_inBST(root,k);
    
    }
    
    cout<<endl<< "levelOrder: " ;
    levelOrder(root);

    // cout<<endl<< "enter search value: " ;
    // int s; cin>> s;
    // if(search_inBST(root,s))
    //     cout<<"yes,found" <<endl;
    // else
    //     cout<<"not found" <<endl;

    return 0 ;
}