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

//Only print the left boundary of the tree
void print_outerTree_Left(Bnode* root){
    if(root->left) print_outerTree_Left(root->left);
    else if(root->right) print_outerTree_Left(root->right);
    // If no left, move to right child

    cout<<root->val <<" " ; 
    //start printing, after reaching the Leftmost node.
}

//Only print the right boundary of the tree
void print_outerTree_Right(Bnode* root){
    if(root->right){
        cout<< root->right->val <<" ";
        print_outerTree_Right(root->right);
    }
    else if(root->left){
        cout<<root->left->val <<" " ;
        print_outerTree_Right(root->left);
    }
}

int main(){   
    Bnode* root= input_tree();
    
    if(root->left){
        print_outerTree_Left(root); //print left boundary with root
        if(root->right)
            print_outerTree_Right(root);
            //print Right boundary without root
    }
    else{ //No left boundary
        cout<< root->val<<" ";
        print_outerTree_Right(root);
        //print Right boundary without root
    }

    return 0 ;
}
