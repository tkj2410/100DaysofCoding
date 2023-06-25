int solve(vector<int> &arr, vector<int> &dp, int index)
    {
        if(index == 0){
            return arr[index];
        }
        if(index < 0){
            return 0;
        }

        if(dp[index] != -1)
        {
            return dp[index];
        }

        int pick = arr[index]  + solve(arr,dp, index-2);
        int nonpick = 0 + solve(arr,dp, index-1);

        dp[index] = max(pick, nonpick);
        return dp[index];

    }

    int rob(vector<int>& nums) {
        int index = nums.size() -1;

        if(index +1 == 1){
            return nums[0];
        }
        vector<int> first, last;
        for(int i=0;i<nums.size();i++){

            if(i != index){
                first.push_back(nums[i]);
            }

            if(i != 0){
                last.push_back(nums[i]);
            }
        }
        vector<int> dp1(index, -1);
        vector<int> dp2(index, -1);
        
        return max(solve(first, dp1, index-1) , solve(last, dp2, index-1));
        
    }