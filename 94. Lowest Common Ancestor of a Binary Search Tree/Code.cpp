TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //map<TreeNode* , TreeNode*> parent;
        //traverse(root,parent);
        while(true)
        {
            if(root-> val == p-> val)
            {
                return p;
                break;
            }
            else if(root-> val == q-> val)
            {
                return q;
                break;
            }
            else if( ((root->val >= p->val) && (root->val <= q->val)) || ((root->val <= p->val) && (root->val >= q->val)))
            {
                return root;
                break;
            }
            else{
                if((root->val >= p->val) && (root->val >= q->val))
                {
                    root= root->left;
                }
                else 
                {
                    root = root-> right;
                }
            } 
        }
    }