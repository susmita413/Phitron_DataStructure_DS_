//
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
    vector<int> v;
    void leafNode(TreeNode* root){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){ //preOrder
            v.push_back(root->val);
            return;
        }
        leafNode(root->left);
        leafNode(root->right);
    }
    //or, postOrder, Inorder
    void leafNode(TreeNode* root){
        if(root==NULL) return;
            
        leafNode(root->left);
        leafNode(root->right);
        if(root->left==NULL && root->right==NULL){ //postOrder
            v.push_back(root->val);
            return;
        }
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        v.clear();
        leafNode(root1);
        vector<int> v1(v) ; //copy vector
    
        v.clear();
        leafNode(root2);
        vector<int> v2(v);
    
        if(v1.size()==v2.size()){
        //equal() => here Vector size must be equal.
            if( equal(v1.begin(),v1.end(), v2.begin()) ) 
                return true;
            else return false;
        }
        else return false;
        //return v1==v2; //or
    }
};

//or.........

class Solution {
public:
    vector<int> v1;
    vector<int> v2;
    void leafNode(TreeNode* root, int c){ //c= checker
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){ 
            if(c==1)
                v1.push_back(root->val);
            else if(c==2)
                v2.push_back(root->val);
            return;
        }
        leafNode(root->left,c);
        leafNode(root->right,c); 
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        v1.clear();
        v2.clear();
        leafNode(root1,1); //get v1 vector
        leafNode(root2,2); //get v2 vector
        return v1==v2; //if similar,then True
    }
};

