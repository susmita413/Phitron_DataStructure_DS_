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

int max_Height(Bnode* root){
    if(root==NULL) return 0;  
    int l= max_Height(root->left);  
    int r= max_Height(root->right); 
    return max(l,r)+1 ;             
}

bool perfect_binaryTree(Bnode* root, int h){
    queue< pair<Bnode*, int> > q;
    q.push({root,1});
    while(!q.empty()){
        pair<Bnode* ,int> pr= q.front();
        q.pop();
        Bnode* node= pr.first;
        int level= pr.second;
        
        if(node->left==NULL && node->right==NULL){  
            if(level!=h) return false; //CHECK level of leaf node
        }
        else if(node->left==NULL || node->right==NULL)
            return false;    // if node has 1 child

        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right, level+1});
        //for perfect leaf node, if condition is false= Not Push
    }
    return true;
    //if queue is EMPTY,then all work perfectly done,so return true
}

int main(){
    Bnode* root= input_tree();
    int h= max_Height(root);
    bool ans= perfect_binaryTree(root,h);

    if(ans) cout<<"YES" <<endl;
    else cout<<"NO" <<endl;
}