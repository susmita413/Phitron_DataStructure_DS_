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
        root= new Bnode(x);  return;
    }               
    if(x< root->val){
        if(root->left==NULL)
            root->left= new Bnode(x);
        else
            insert_inBST(root->left,x);
    }
    else{   
        if(root->right== NULL)
            root->right= new Bnode(x);
        else 
            insert_inBST(root->right,x);
    }
}

Bnode* convert_toBST(int a[],int l,int r){
    if(l>r) return NULL;  //BASE case
    int mid= (l+r)/2;
    Bnode* root= new Bnode(a[mid]);

    Bnode* leftRoot=convert_toBST(a,l,mid-1);
    Bnode* rightRoot=convert_toBST(a,mid+1,r);
    root->left= leftRoot;
    root->right= rightRoot;
    return root;
}



int main(){
    int a[]= {2,5,8,10,12,15,18,25,30,32,34};//given sorted array,no duplicate
    int n= sizeof(a)/sizeof(a[0]) ;
    Bnode* root= convert_toBST(a,0,n-1);

    // cout<<"enter Insert value: " ;
    // for(int i=1; i<=5; i++){ 
    //     int k; cin>>k ;
    //     insert_inBST(root,k);
    // }
    
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