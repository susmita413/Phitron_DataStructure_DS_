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
        int sum=0;
        
        void rangeSum(TreeNode* root, int low, int high){
            if(root==NULL){
                return;
            }
    
            // If the node's value is within the given range, add it to the sum
            if(root->val >=low && root->val <=high){
                sum= sum+root->val ;
                rangeSum(root->left, low,high); // Search the left subtree
                rangeSum(root->right, low,high); // Search the right subtree
            } 
    
            //greater than low and high, so LEFT val would be Lower and in RANGE
            else if(root->val >low ){
                rangeSum(root->left, low,high);
            }
    
            //less than low and high, so RIGHT val would be Higher and in RANGE
            else if(root->val <high){ 
                rangeSum(root->right, low,high);
            }
    
        }
    
    
        int rangeSumBST(TreeNode* root, int low, int high) {
            sum=0;
            rangeSum(root, low,high);
            return sum;
        }
    };