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

void preOrder(Bnode *root){  //root->left->right
    if(root==NULL){  //base case // for Leaf Node
        return;
    }
    cout<< root->val<< " " ; // root of Every Subtree
    preOrder(root->left);    // left subtree
    preOrder(root->right);   // right subtree
}

void postOrder(Bnode *root){ // left->right->root
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<< root->val <<" " ;
}

void inOrder(Bnode *root){  // left->root->right
    if(root == NULL) return;  

    inOrder(root->left);
    cout<< root->val<< " " ;
    inOrder(root->right);
}

void levelOrder(Bnode *root){
    if(root==NULL){
        cout<< " tree Empty."<<endl;
        return;
    }
    queue<Bnode*> q;
    q.push(root);
    while(!q.empty()){
        Bnode *x= q.front();  // 1. front value keep
        cout<< x->val <<" " ; // 2. front value print ( inside work)
        q.pop() ;             // front value pop 

        if(x->left)           // 3. push its child
            q.push(x->left);
        if(x->right)
            q.push( x->right);
    }

}

Bnode* input_tree(){
    Bnode* root ;
    int rt;
    cin>> rt;  // ENTER ROOT NODE
    if(rt==-1) root= NULL;
    else root = new Bnode(rt); // create root Node 

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

int main(){

    Bnode* root= input_tree(); 
    cout <<endl<<"LevelOrder: ";
    levelOrder(root);

    cout<<endl<< "PreOrder : " ;
    preOrder(root);

    cout<< endl <<"PostOrder: " ;
    postOrder(root);

    cout<< endl <<"InOrder: " ;
    inOrder(root);
    cout<< endl ;
    
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

/*
Bnode* input_tree(){
    Bnode* root;
    int rt; cin>>rt;
    if(rt==-1) root=NULL;
    else root= new Bnode(rt);
    queue<Bnode*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Bnode* p= q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        if(l==-1) p->left=NULL;  //OPTIMISED
        else p->left= new Bnode(l); //HERE Q.PUSH KORA JAI
        if(r==-1) p->right=NULL;
        else p->right= new Bnode(r);
        
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
*/