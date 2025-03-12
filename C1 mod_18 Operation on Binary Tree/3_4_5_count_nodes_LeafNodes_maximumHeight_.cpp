// count Nodes in a binary tree
// count Leaf Nodes in a binary tree
// Maximum Height of a binary tree . => height= 1 to n

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

int count_Nodes(Bnode* root){
    if(root==NULL) return 0; //base case

    int l= count_Nodes(root->left);  //nodes of left subtree
    int r= count_Nodes(root->right); //nodes of right subtree
    return l+r+1;         // always root node count herself as a node
}

int count_LeafNodes(Bnode* root){
    if(root==NULL) return 0;  //null(-1) node or, empty tree
    if(root->left==NULL && root->right==NULL) //Leaf Node
        return 1;
    else{ //Not a Leaf Node
        int l= count_LeafNodes(root->left);
        int r= count_LeafNodes(root->right);
        return l+r ;
    }
}

int max_Height(Bnode* root){
    if(root==NULL) return 0;  //null(-1) node or, empty tree
    int l= max_Height(root->left);  //MaxHeight of Left subtree
    int r= max_Height(root->right); //MaxHeight of Right subtree
    return max(l,r)+1 ;             // a Node always add its height
}

int main(){   
    Bnode* root= input_tree();
    cout <<endl << "level Order Print: " << endl;
    levelOrder(root);
    cout<< endl;

    cout<<"number of nodes in this tree: "<<count_Nodes(root) <<endl;
    cout<<"number of Leaf nodes: "<<count_LeafNodes(root) <<endl;
    cout<<"Maximum height of this tree: "<<max_Height(root) <<endl;

    return 0 ;
}
/*
Input: 
10
20 30
40 90 -1 50
-1 60 -1 100 70 80
-1 -1 -1 -1 -1 -1 -1 -1

input: 
10
20 30
70 150 120 80
80 90 -1 -1 130 -1 60 50
-1 -1 100 -1 -1 -1 -1 -1 -1 -1
-1 110
-1 -1

level Order Print:
10 20 30 70 150 120 80 80 90 130 60 50 100 110
number of nodes in this tree: 14
number of Leaf nodes: 6
Maximum height of this tree: 6
*/
