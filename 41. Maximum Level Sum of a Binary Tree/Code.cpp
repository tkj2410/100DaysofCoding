void level_order(TreeNode *root, map<int, int> &map, int &maxi)
        {
            queue<TreeNode *> que;
            TreeNode *temp;

            int sum = 0;
            int level = 1;

            que.push(root);
            que.push(NULL);
            while (!que.empty())
            {
                temp = que.front();
                que.pop();

                if (temp == NULL)
                {
                    map[level++] = sum;
                    maxi = max(maxi,sum);
                    sum = 0;
                    if (!que.empty())
                    {
                        que.push(NULL);
                    }
                }

                else
                {
                    sum += temp->val;

                    if (temp->left)
                    {
                        que.push(temp->left);
                    }
                    if (temp->right)
                    {

                        que.push(temp->right);
                    }
                }
            }
        }

        int maxLevelSum(TreeNode *root)
        {
            map<int, int> umap;
            int maxi = INT_MIN;
            level_order(root, umap,maxi);
            
            for(auto ele: umap){

                if(ele.second == maxi)
                {
                    return ele.first;
                }
            }
            return umap[1];
        }