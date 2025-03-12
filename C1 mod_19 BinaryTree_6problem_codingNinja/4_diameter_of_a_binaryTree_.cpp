//Return the length of the diameter of the tree.
//The diameter of a binary tree is the length of the longest path 
//between any two end nodes in a tree.

#include<bits/stdc++.h>
using namespace std;
template <typename T>
class TreeNode {
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;
    TreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};


int mx= 0;
int maxHeight(TreeNode<int>* root){
    if(root==NULL)
        return 0;
    int l= maxHeight(root->left);
    int r= maxHeight(root->right);
    int d= l+r;  //find diameter for every Parent node
    mx= max(mx,d); //compare diameter with previous diameter

    return max(l,r)+1;  //return everyNode's maxHeight
}

int diameterOfBinaryTree(TreeNode<int> *root){
	mx=0;
    int h= maxHeight(root);
    return mx;
}
