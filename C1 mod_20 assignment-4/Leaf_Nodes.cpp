// print the values of leaf nodes in descending order.
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
        Bnode* myleft; 
        Bnode* myright;
        int l,r;
        cin>>l >>r;               
        if(l==-1) myleft= NULL;
        else myleft= new Bnode(l);
        if(r==-1) myright= NULL;
        else myright= new Bnode(r);  

        p->left = myleft;
        p->right= myright;       
        if(p->left) q.push(p->left); 
        if(p->right) q.push(p->right);
    }
    return root;
}

vector<int> v;
void leafNodes(Bnode* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        v.push_back(root->val); //Only Push leaf node
        return;
    }
    leafNodes(root->left);
    leafNodes(root->right);
}

int main(){
    Bnode* root= input_tree();
    v.clear();
    leafNodes(root);
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int x: v){
        cout<<x <<" " ;
    }

}