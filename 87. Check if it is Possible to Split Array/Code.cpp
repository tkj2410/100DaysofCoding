bool canSplitArray(vector<int>& nums, int m) 
    {
        int n = nums.size();
        
        if(n <= 2) 
            return true;
        
        int sum = 0;
        for(int i = 0; i < n-1; i++) 
        {
            if(nums[i] + nums[i+1] >= m) 
                return true;
        }
        
        return false;
    }