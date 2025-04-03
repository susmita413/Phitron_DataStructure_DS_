/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 
class Solution {
    public:
         TreeNode* srch(TreeNode* root, int val) {
            if (root == NULL) return NULL; // First, check if root is NULL
            if (root->val == val) return root; // If found, return root
    
            if (root->val < val) 
                return srch(root->right, val); // Search in the right subtree
            else 
                return srch(root->left, val); // Search in the left subtree
        }
    
        TreeNode* searchBST(TreeNode* root, int val) {
            TreeNode* ans_root= srch(root, val);
            return ans_root;
        }
    };