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

        int l,r;              //3. Inside Work
        cin>>l >>r;                  // enter LEFT and RIGHT value
        if(l==-1) p->left= NULL;
        else p->left= new Bnode(l);
        if(r==-1) p->right= NULL;
        else p->right= new Bnode(r);  // create LEFT and RIGHT node
        
        if(p->left) q.push(p->left);  //4. push LEFT and RIGHT node in QUEUE
        if(p->right) q.push(p->right);
    }
    return root;
}

bool search_inBST(Bnode* root,int x){ //O(height)= O(N) or O(logN)
    if(root==NULL) return false;  
    //if there is no 'x', then it will reach NULL

    if(root->val==x) return true;
    if(x< root->val){
        //bool l= search_inBST(root->left,x); //search in left Subtree
        //return l;
        return search_inBST(root->left,x);  //same value is return
    }
    else{  // if, x> root->val
        //bool r= search_inBST(root->right,x);//search in left Subtree
        //return r;
        return search_inBST(root->right,x);  //same value willbe return
    }

}

int main(){
    Bnode* root= input_tree();
    
    cout<<"enter search value: " ;
    int x; cin>> x;
    if(search_inBST(root,x))
        cout<<"yes,found" <<endl;
    else
        cout<<"not found" <<endl;

    return 0 ;
}