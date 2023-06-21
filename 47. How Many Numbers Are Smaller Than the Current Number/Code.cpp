vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        int maxi = *max_element(nums.begin(), nums.end());
        vector<int> map(maxi+1,0);
        vector<int> ans;
        //sort(ans.begin(),ans.end());
        for(int i=0; i<nums.size();i++){
            
            map[nums[i]]+=1;
        }

        unordered_map<int,int> umap;
        int count=0;
        
        for(int i=0; i<map.size();i++){
            if(map[i]>0){
                cout<<"in";
                umap[i]=count;
                count+=map[i];
            }
        }

        for(int i=0; i<nums.size();i++){

            ans.push_back(umap[nums[i]]);
        }
        return ans;  
    }