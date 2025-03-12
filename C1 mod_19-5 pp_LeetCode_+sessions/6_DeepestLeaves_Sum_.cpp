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
    int maxHeight(TreeNode* root){
        if(root==NULL) return 0;
        int l= maxHeight(root->left);
        int r= maxHeight(root->right);
        return max(l,r)+1 ;
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int h= maxHeight(root);   //get tree height
        queue< pair<TreeNode* ,int> > q; //queue Pair with Node & level
        q.push({root,1});
        int sum=0;           //store Answer
                             //level order traverse
        while(!q.empty()){
            pair<TreeNode* ,int> pr= q.front();
            TreeNode* node= pr.first;
            int level= pr.second;
            q.pop();

            if(level==h)  //match level to MaxHeight/ MaxLevel
                sum= sum+ node->val;
    
            if(node->left) q.push({node->left,level+1});//every node will PUSH
            if(node->right) q.push({node->right,level+1});
        }
        return sum;
    }    
};