bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int len = matrix[0].size() -1;

        for(int i =0; i<matrix.size(); i++){

            if(target <= matrix[i][len])
            {
                int s = 0;;
                int e = len;
                int m= s + ((e-s)/2);

                while(s<=e){
                    if(matrix[i][m] == target)
                    {
                        return true;
                    }
                    else if(matrix[i][m] < target){
                        s=m+1;
                    }
                    else{
                        e=m-1;
                    }
                    m= s + ((e-s)/2);

                }

            }
        }
        return false;
    }