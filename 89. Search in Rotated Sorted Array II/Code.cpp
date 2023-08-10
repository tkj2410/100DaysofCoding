bool binary_search(int s, int e, vector<int> nums, int target)
    {
        int m;
        while(s<=e)
        {
            m= s + ((e-s)/2);
            if(nums[m] == target)
            {
                return true;
            }
            else if(nums[m] < target)
            {
                s = m+1;
            }
            else
            {
                e = m-1;
            }
        }
        return false;

    }
    bool search(vector<int>& nums, int target)
    {
        //sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n==1)
        {
            if(nums[0] == target)
            {
                return true;
            }
            return false;
        }

         
        int mid_ind=-1;
        for(int i= n-2; i>=0; i--)
        {
            if(nums[i] > nums[i+1])
            {
                mid_ind = i;
                break;
            }

        }
        if(nums[0] ==target)
        {
            return true;
        }
        if(mid_ind!=-1 && nums[mid_ind] ==target)
        {
            return true;
        }

        int s = 0;
        int e = n-1;
        if(mid_ind != -1)
        {
            e = mid_ind+1 ;
            cout<<mid_ind;
        }
        if(target >= nums[0])
        {
            return binary_search(s,e,nums,target);
        }
        else 
        {
            s= mid_ind+1;
            e = n-1;
            return binary_search(s,e,nums,target);
        }
        return false;
    }
