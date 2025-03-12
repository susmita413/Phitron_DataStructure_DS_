//Handle duplicate in insert_inBST()
// user shouldn't give duplicate in input_tree()
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

int frq[200]={0} ;
Bnode* input_tree(){ 
//user should not give duplicate value for left and right node/ similar to another level node.
    Bnode* root ;
    int rt; cin>> rt;  
    if(rt==-1) root= NULL;
    else{
        root = new Bnode(rt); 
        frq[rt]++ ;
    } 
    queue<Bnode*> q;       
    if(root) q.push(root);
    while(!q.empty()){
        Bnode* p = q.front(); 
        q.pop(); 
        int l,r;  cin>>l >>r;          
        if(l==-1) p->left= NULL;
        else{ 
            p->left= new Bnode(l);
            frq[l]++ ;
        }
        if(r==-1) p->right= NULL;
        else{
            p->right= new Bnode(r);
            frq[r]++ ; 
        }  
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

void levelOrder(Bnode *root){
    if(root==NULL){
        cout<< " tree Empty."<<endl;   return;
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

void insert_inBST(Bnode* &root, int x){
    if(root==NULL){
        root= new Bnode(x);
        frq[x]++;  return;
    } 
    if(x==root->val){
        frq[x]++ ;
    }
    else if(x< root->val){
        if(root->left==NULL){
            root->left= new Bnode(x);
            frq[x]++;
        }
        else
            insert_inBST(root->left,x);
    }
    else{   
        if(root->right== NULL){
            root->right= new Bnode(x);
            frq[x]++ ;
        }
        else 
            insert_inBST(root->right,x);
    }
}

int main(){
    //Bnode* root=input_tree();
    Bnode* root=NULL;
    cout<<"enter Insert value: " ;
    for(int i=1; i<=10; i++){ 
        int k; cin>>k ;
        insert_inBST(root,k); //handle duplicate and take input
    }
    
    cout<<endl<< "levelOrder: " ;
    levelOrder(root);
    cout<<endl;
    for(int i=0;i<200;i++){
        if(frq[i] !=0)
            cout<<i <<"= " <<frq[i] <<" times" <<endl;
    }

    return 0 ;
}

/* input: 
10
5 15
2 6 12 16
-1 3 -1 -1  -1 -1 -1 -1
-1 -1
enter Insert value: 10 12 16 10 14 27 16 20 9 10

*/

/* only input in insert_inBST() :
enter Insert value: 30 50 45 10 10 5 30 20 25 28
*/
