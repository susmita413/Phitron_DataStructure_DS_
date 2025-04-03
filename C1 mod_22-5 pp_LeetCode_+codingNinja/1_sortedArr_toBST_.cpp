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
        TreeNode* createBST(vector<int> nums, int l,int r){
            if(l>r) return NULL;
    
            int mid= (l+r)/2;
            TreeNode* root = new TreeNode(nums[mid]);
            TreeNode* l_root= createBST(nums,l,mid-1);
            TreeNode* r_root= createBST(nums,mid+1, r);
    
            root->left= l_root;
            root->right= r_root;
            return root;
        }
    
    
        TreeNode* sortedArrayToBST(vector<int>& nums) {
            TreeNode* final_root= createBST(nums,0, nums.size()-1);
            return final_root;
        }
    };
    
    
    
    
    
    
    