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


vector<int> getLeftView(TreeNode<int> *root){
    bool frq[3010] = {false};
    queue< pair<TreeNode<int>* ,int> > q;
    if(root) q.push({root,1});          //1.
    vector<int> v;

    while(!q.empty()){
        pair<TreeNode<int>* , int> pr= q.front(); //2.
        q.pop();
        TreeNode<int>* node= pr.first;
        int level= pr.second;
                          
        if(frq[level]== false){                  //3.
            v.push_back(node->data);
            frq[level]= true;
        }

        if(node->left)                           //4.
            q.push({node->left, level+1});
        if(node->right)
            q.push({node->right, level+1});
    }
    return v;
}