vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.size() == 1){
            return { to_string(nums[0])};
        }

        string str="";
        bool flag = true;
        for(int i=0; i<nums.size(); i++){
            

            if((i==nums.size()-1) || ( nums[i+1] !=nums[i]+1 )) {
                str += to_string(nums[i]);
                ans.push_back(str);
                str="";
                flag = true;
            }

            else if((nums[i+1] ==nums[i]+1) && flag){
                str += to_string(nums[i]) + "->";
                flag = false;
            }
        }

        return ans;
        
    }