//You are supposed to return the reverse of 
//the level order traversal. bottom to top and right to left.

#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;
    TreeNode(T val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> reverseLevelOrder(TreeNode<int> *root){
    queue< TreeNode<int>*> q;
    if(root) q.push(root);      //1.
    vector<int> v;
    
    while(!q.empty()){
        TreeNode<int>* p = q.front(); //2.
        q.pop();

        v.push_back(p->val);          //3.

        if(p->left) q.push(p->left);  //4.
        if(p->right) q.push(p->right);
    }
    reverse(v.begin(),v.end());
    return v;

}