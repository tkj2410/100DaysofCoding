int singleNumber(vector<int>& nums) {

        int ans=0 ;
        int ans2=0;
        for(int i=0; i<nums.size();i++)
        {
            ans ^= ~ans2 & nums[i];
            ans2 ^= ~ans & nums[i];

        }

        return ans;
    }