
class Solution {
public:
    vector<int> v;
    void inOrder(TreeNode* root){
        if(root==NULL) return;
        inOrder(root->left);
        v.push_back(root->val);
        inOrder(root->right);
    }


    bool findTarget(TreeNode* root, int k) {
        inOrder(root); //BST= ascending sorted array
        int left= 0;
        int right = v.size()-1;

        while(left<right){ //two pointer
            int sum= v[left]+ v[right];

            if(sum>k) right-- ;
            //sum=big means right= big,so right-- and right=smaller than previous
            else if(sum<k) left++ ;
            //sum=small means left=small,so left++ and Left=bigger than previous

            else if(sum==k) return true;
        }

        return false;// No valid pair found
    }
};