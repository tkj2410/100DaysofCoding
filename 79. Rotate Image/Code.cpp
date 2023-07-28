void rotate(vector<vector<int>>& matrix) 
    {
        int ind, i,j,n;
        ind =j= i=0;
       // n=matrix.size()-1;
        int m = matrix[0].size();

        for(j =0; j<matrix.size(); j++)
        {
            n=matrix.size()-1;
            reverse(matrix[j].begin(), matrix[j].end());
            for(i =0; i<m-1-j; i++)
            {
                swap(matrix[j][i] , matrix[n][ind] );
                n--;

            }
            ind++;
        }
        
    }