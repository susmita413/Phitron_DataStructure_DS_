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

vector<int> v;
void preOrder_Recursion(TreeNode<int>* root){ //root->left->right
    if(root==NULL) return;

    v.push_back(root->data);         //nije push
    preOrder_Recursion(root->left);  //left subtree
    preOrder_Recursion(root->right);  //right subtree
}

vector<int> preOrder(TreeNode<int>* root){
    v.clear();
    preOrder_Recursion(root);
    return v;
}
