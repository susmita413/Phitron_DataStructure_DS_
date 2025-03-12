#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

vector<int> v;
void postOrder(TreeNode* root){ //left->right->root
    if(root==NULL) return;
    postOrder(root->left);     //left subtree
    postOrder(root->right);    //right subtree
    v.push_back(root->data);   //root : push that in vector
}

vector<int> postorderTraversal(TreeNode *root){
    v.clear();       
    //onek testcase thakar karone vector protibar clear kora dorkar
    postOrder(root);
    return v;
}