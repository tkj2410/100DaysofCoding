vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> map;

        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        
        priority_queue<int> heap;
        vector<int> ans;
        
        for(auto ele: map){
            heap.push(ele.second);
        }

        for(int i=0;i<k;i++){
            for(auto ele: map)
            {
                if(ele.second == heap.top())
                {
                    ans.push_back(ele.first);
                    heap.pop();
                    map.erase(ele.first);
                    break;
                }
            }
        }

        return ans;
        
    }