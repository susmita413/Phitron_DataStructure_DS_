
class Solution {
public:
    TreeNode* curr=NULL; //iterator of newtree
    TreeNode* nRoot=NULL;// root of newtree

    void skewInorder(TreeNode* root){
        if(root==NULL) return;

        skewInorder(root->left); //inorder= left-root-right
        if(nRoot==NULL){
            nRoot= new TreeNode(root->val);
            curr= nRoot;
        }
        else{
            curr->left= NULL;
            curr->right= new TreeNode(root->val);
            curr= curr->right;
        }

        skewInorder(root->right);
    }

    TreeNode* increasingBST(TreeNode* root) {
        skewInorder(root);
        return nRoot ;
    }
};