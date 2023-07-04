vector<vector<int>> findMatrix(vector<int>& nums) {

        unordered_map<int,int> map;

        int maxi = INT_MIN;

        for(int i=0; i<nums.size(); i++)
        {
            map[nums[i]]++;
            maxi = max(maxi,map[nums[i]]);
        }
        vector<vector<int>> ans;

        for(int i=0;i<maxi;i++)
        {
            vector<int> arr;
            for(auto  ele: map){
        
                if(ele.second>0){
                    int inp = ele.first;
                    arr.push_back(inp);
                    map[inp]--;
                }
                
            }
            if(!arr.empty())
            {
                ans.push_back(arr);
            }
            

        }
        return ans;
    }