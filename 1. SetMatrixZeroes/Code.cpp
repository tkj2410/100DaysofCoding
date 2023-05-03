    void setZeroes(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_map<int, bool> rows;
        unordered_map<int, bool> cols;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0)
                {
                    rows[i] =true;
                    cols[j] = true;
                }
            }
        }

        
        for(auto it: rows){
            fill(matrix[it.first].begin(), matrix[it.first].end(), 0);
        }

        for(auto it: cols){
            for(int i=0; i<n; i++){
                matrix[i][it.first] =0;
            }
        }
    }
