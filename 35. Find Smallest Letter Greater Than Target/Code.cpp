    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int len= letters.size();
        if((letters[len-1] ) <= target || letters[0] > target)
        {
            return letters[0];
        }
        int s= 0;
        int e= len-1;
        int m =  s+ ((e-s)/2);

        char ans;
        while(s<=e)
        {
            m =  s+ ((e-s)/2);

            if(letters[m]<=target){
                s= m+1;
                
            }
            else{
                ans = letters[m];
                e=m-1;
                
            }
           
        }

        return ans;

    }