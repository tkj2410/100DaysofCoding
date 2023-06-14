    void inorderTraversal(TreeNode* node,TreeNode* &prevNode,int &mini) {
        if (node == NULL) {
            return;
        }
        
        inorderTraversal(node->left,prevNode,mini);


        if (prevNode != NULL) {
            minDifference = min(minDifference, node->val - prevNode->val);
        }
        prevNode = node;
        
        inorderTraversal(node->right,prevNode,mini);
    }
    
    int getMinimumDifference(TreeNode* root) {
        int mini = INT_MAX;
        TreeNode* prevNode = NULL;
        inorderTraversal(root, prevNode,mini);
        return mini;
    }