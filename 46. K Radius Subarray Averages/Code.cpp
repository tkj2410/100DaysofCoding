vector<int> getAverages(vector<int>& nums, int k) {

        int low = k;
        int n = nums.size();
        int high = n - k;

        if(k==0){
            return nums;
        }

        if(2*k>=n){
            vector<int> ans(n,-1);
            return ans;
        }

         vector<int> ans;
        for(int i = 0; i<low;i++)
        {
            ans.push_back(-1);
        }
        long long sum=0;
        for(int j = low-k; j<= low+k; j++)
        {
            sum+=nums[j];
        }

        for(int i= low; i<high-1; i++){
            ans.push_back(sum/(2*k +1));
            sum-=nums[i-k];
            sum+=nums[i+k+1];
        }
        ans.push_back(sum/(2*k +1));

        for(int i = 0; i<low;i++){
            ans.push_back(-1);
        }
        return ans;
        
    }
    
};