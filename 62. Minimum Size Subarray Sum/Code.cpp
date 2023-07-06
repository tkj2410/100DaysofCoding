int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0; 
        int right = 0;
        int sum = 0;
        int len = INT_MAX;

        for(right = 0; right < nums.size(); right++)
        {
            sum += nums[right];

            while (sum >= target)
            {
                len = min(len, right - left + 1);
                
                sum -= nums[left];
                left++;
            }
        }

        if(len == INT_MAX)
        {
            return 0;
        } 
        else{
            return len;
        }
    }