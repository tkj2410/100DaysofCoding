void traverse(TreeNode* root,vector<vector<int>>&ans )
    {
        vector<int> otp;
        queue<TreeNode*> que;
        que.push(root);
        que.push(NULL);

        int i=1;

        TreeNode* temp;
        while(!que.empty())
        {
            temp = que.front();
            que.pop();
            if(temp==NULL)
            {
                if(i%2==0)
                {
                    reverse(otp.begin(), otp.end());
                }
                ans.push_back(otp);
                otp.clear();
                if(!que.empty())
                {
                    que.push(NULL);
                }
                i++;
            }
            else
            {
                otp.push_back(temp->val);

                if(temp->left)
                {
                    que.push(temp->left);
                }

                if(temp->right)
                {
                    que.push(temp->right);
                }

            }
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        if(root == NULL)
        {
            return {};
        }

        vector<vector<int>> ans;
        traverse(root,ans);

        return ans;
    }