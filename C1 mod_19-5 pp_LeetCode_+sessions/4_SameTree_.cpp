// Two binary trees are considered the same if they are 
//structurally identical, and the nodes have the same value.
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        if(p->val != q->val) return false;
    
                    //if(p->val == q->val) , p=q !=NULL
        bool l= isSameTree(p->left, q->left);  
        bool r= isSameTree(p->right, q->right);
        if(l==false || r==false) return false;
        return true; 
    }
};