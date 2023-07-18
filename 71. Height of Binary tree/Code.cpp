int solve(TreeNode* root)
    {
        if(root == NULL){
            return 0;
        }
        int ll = solve(root->left) + 1;
        int rr = solve(root->right) +1;
        return max(ll,rr) ;
    }
    int maxDepth(TreeNode* root) {
        return solve(root) ;
    }