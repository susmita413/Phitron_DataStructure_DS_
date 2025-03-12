#include<bits/stdc++.h>
using namespace std;
class TreeNode {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

vector<int> v;
void inorder_recursion(TreeNode *root){//left->root->right
    if(root==NULL) return;
    inorder_recursion(root->left);
    v.push_back(root->data);
    inorder_recursion(root->right);
}

vector<int> getInOrderTraversal(TreeNode *root){
    v.clear();
    inorder_recursion(root);
    return v;
}