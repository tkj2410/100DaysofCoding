int subarraySum(vector<int>& nums, int k) {

        if(nums.size()==1 )
        {
            if( k ==nums[0])
            {
                return 1;
            }
            else 
                return 0;
        }

        int len = nums.size();
        int sum=0;
        int count=0;
        vector<int> arr(len,0);

        for(int i=0;i< len; i++)
        {
            sum+=nums[i];
            arr[i]=sum;
               
        }

        unordered_map<int,int> map;
        int pos;
        for(int i=0;i< len; i++)
        {
            if(arr[i]==k)
            {
               count++;
            }
            pos = arr[i] - k;
            if(map.find(pos) != map.end())
            {
                count += map[pos];
            }
            
            map[arr[i]]++;
        }

        return count;
        
    }