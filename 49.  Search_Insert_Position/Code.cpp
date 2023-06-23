int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size();
        int m=(s+e)/2;

        while(s<e)
        {
            if(nums[m] == target){
                return m;
            }
            else if(nums[m]< target)
            {
                s=m+1;
                m=(s+e)/2;
            }
            else{
                e=m;
                m=(s+e)/2;

            }
        }
        return m;
        
    }