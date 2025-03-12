//  find whether a node exists in the tree with data X or not.

#include<bits/stdc++.h>
using namespace std;
template <typename T>
class BinaryTreeNode{
public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    
    int flag=0 ;
    while(!q.empty()){
        BinaryTreeNode<int>* p= q.front();
        q.pop();
    
        if(p->data == x){
            flag=1 ;
            break;
        }
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    
    return (flag==1)? true:false ;
}

// OR.........(IN CLASS)

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root==NULL) return false; //base case
    if(root->data== x) return true;

    bool l= isNodePresent(root->left,x);
    bool r= isNodePresent(root->right,x);
    return (l || r);
}

