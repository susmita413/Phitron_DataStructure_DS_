//A binary tree is uni-valued if every node in the tree 
//has the same value.
#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    bool unival_recursion(TreeNode* root, int x){
        if(root==NULL) return true; //when current node=NULL,consider it a unival subtree
        if(root->val !=x) return false;
   
        bool l= unival_recursion(root->left,x); // if root->val ==x
        bool r= unival_recursion(root->right,x);
        return (l&&r); 
        //tree is unival only if both left and right subtrees are unival
    }
   
    bool isUnivalTree(TreeNode* root) {
        bool res= unival_recursion(root, root->val);
        //In recursion,it checks, if all values= root value(x)
        return res;
    }   
};