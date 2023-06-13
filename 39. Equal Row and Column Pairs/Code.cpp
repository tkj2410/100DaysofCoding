int equalPairs(vector<vector<int>>& grid) {

        map <vector<int>,int> hmap;

        int len= grid[0].size();
        
        for(int i =0; i<grid.size(); i++)
        {
            vector<int> arr;
            for(int j =0; j<len; j++)
            {
                arr.push_back(grid[j][i]);
            }
            hmap[arr]++;
        }
        int count=0;
        for(int i =0; i<grid.size(); i++){
            if(hmap[grid[i]] > 0){
                count += hmap[grid[i]];
               
            }
        }
        return count;
        
    }