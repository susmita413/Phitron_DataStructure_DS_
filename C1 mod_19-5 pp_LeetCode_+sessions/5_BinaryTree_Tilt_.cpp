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
    int tilt=0;
    int findTilt_recur(TreeNode* root){
        if(root==NULL) return 0;
    
        int l= findTilt_recur(root->left);
        int r= findTilt_recur(root->right);
        int new_tilt= abs(l-r);
        tilt= tilt+ new_tilt;
        
        return l+r+root->val;
    }
    
    int findTilt(TreeNode* root) {
        tilt=0;
        int x= findTilt_recur(root); //get sum of all nodeValues
        return tilt;
    
    }
};