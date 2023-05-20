void inorder(TreeNode* root, TreeNode* &prev, TreeNode* &first, TreeNode* &end) {
        if(root == NULL)
        {
            return;
        }
        // AS IN INORDER TRAVERSAL LNR SO LEFT TRAVERSAL WILL TAKE PLACE
        inorder(root->left, prev, first, end);
        if (prev!=NULL && root->val < prev->val && first==NULL) 
        {

            first = prev;
            //end = root;
            
        }
        if (prev!=NULL && root->val < prev->val && first!=NULL) 
        {

            //first = prev;
            end = root;
            
        }
        prev = root;
        inorder(root->right, prev, first, end);
    }

    void recoverTree(TreeNode* root) {
        TreeNode *prev = NULL;
        TreeNode *first = NULL, *end = NULL;

        inorder(root, prev, first, end);
        swap(first->val, end->val);
        
        return;
    }