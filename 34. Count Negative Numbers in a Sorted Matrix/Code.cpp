int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int n = grid[0].size();
        for(int i=0; i< grid.size(); i++)
        {
            int s= 0;
            int e = n-1;

            int m = s + ((e-s)/2);

            while(s<=e){
                if (grid[i][m] < 0)
                {
                    count+= e-m +1;
                    
                    e=m-1;
                }
                else
                {
                    s=m+1;
                }
                m = s + ((e-s)/2);
            }

        }
        return count;
        
    }