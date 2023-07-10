bool check(TreeNode* r1, TreeNode* r2)
    {
        if(r1==NULL && r2 ==NULL)
        {
            //pair<bool,int> p=make_pair(true,0);
            return true;
        }
        if(r1==NULL && r2 !=NULL)
        {
            return false;
        }
        if(r1!=NULL && r2 ==NULL)
        {
            return false;
        }
        bool left= check(r1->left, r2->left);
        bool right= check(r1->right, r2->right);
        bool value= r1->val == r2->val;

        if(left && right && value){

            return true;
        }
        else
        {
            return false;
        }

    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {

        return check(p,q);
        
    }