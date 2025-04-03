
class Solution {
public:
    vector<int> v;
    void inOrder(TreeNode* root){
        if(root==NULL) return;
        inOrder(root->left);
        v.push_back(root->val);
        inOrder(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        inOrder(root);
        //for a sorted vector,MinimumDifference will come from 2 adjacent nodeValue
        int min=INT_MAX;
        for(int i=0; i<v.size()-1; i++){
            int x= v[i+1]- v[i];
            if(min>x){
                min=x;
            }
        }

        //or
        //int min=v[1]-v[0];
        //for(int i=1; i<v.size()-1; i++){
        //    int x= v[i+1]- v[i];
        //    if(min>x){
        //        min=x;
        //    }
        //}

        return min;
    }
};