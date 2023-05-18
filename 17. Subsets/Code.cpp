void solve(vector<vector<int>> &ans, vector<int> output, vector<int>& nums,int index, int n)
{

        if(index==n){
            ans.push_back(output);
            return;
        }
        solve(ans,output,nums ,index+1,n);
        int ele=nums[index];
        output.push_back(ele);
        solve(ans,output,nums ,index+1,n);
        //output.pop_back();
        
}
        /*void dfs(vector<int>& nums, int index, vector<int>& curr,         
        vector<vector<int>>& result) 
        {
            result.push_back(curr);
            for (int i = index; i < nums.size(); i++) 
            {
                curr.push_back(nums[i]);
                dfs(nums, i + 1, curr, result);
                curr.pop_back();
            }
        }*/
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> output;
        solve(ans,output,nums, 0,nums.size());
        return ans;
        
    }