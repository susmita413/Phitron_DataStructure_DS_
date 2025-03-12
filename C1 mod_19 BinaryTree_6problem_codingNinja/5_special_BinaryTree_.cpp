// A binary tree is called special if every node of this tree has either zero or two children. 
//You have to determine if the given binary tree is special or not.
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


bool isSpecialBinaryTree(BinaryTreeNode<int>* root){
    if(root->left== NULL && root->right==NULL) // 0 child
       return true;
    if(root->left==NULL || root->right==NULL) // 1 child
       return false; 
    //It will return false as soon as it finds a node with 1 child
    //it will not check that subtree again.

    bool l= isSpecialBinaryTree(root->left);  // 2 child
    bool r= isSpecialBinaryTree(root->right);
    return (l&&r) ;

    //if(l==false || r==false) return false;
    //return true;
}