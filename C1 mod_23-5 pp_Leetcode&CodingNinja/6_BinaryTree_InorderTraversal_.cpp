class Solution {
    public:
        vector<int> v;
        void inOrder(TreeNode* root){
            if(root==NULL) return;
            inOrder(root->left);
            v.push_back(root->val);
            inOrder(root->right);
        }
    
        vector<int> inorderTraversal(TreeNode* root) {
            v.clear();
            inOrder(root);
            return v;
        }
};