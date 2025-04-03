void insert_recur(TreeNode<int>* root, int val){
    if(val< root->val){
        if(root->left==NULL)
            root->left= new TreeNode(val);
        else
            insert_recur(root->left,val);
    }
    else if(val> root->val){
        if(root->right==NULL)
            root->right= new TreeNode(val);
        else
            insert_recur(root->right,val);
    }
}


TreeNode<int>* insertionInBST(TreeNode<int>* root, int val){
    insert_recur(root, val);
    return root;
}









