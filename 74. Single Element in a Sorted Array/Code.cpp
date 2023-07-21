class Solution {
public:
    int len;
    bool iseven(int m)
    {
        if(m % 2 == 0)
        {
         return true;
        }
        return false;
    }
    bool notedge(int m)
    {
        if(m != 0 && m!= len-1){
            return true;
        }
        return false;
    }

    int singleNonDuplicate(vector<int>& nums) {

        int s=0;
        int e= nums.size();
        len = e;
        int m;

        if(len ==1){
            return nums[0];
        }

        while(s<=e)
        {
            m = s+ ((e-s)/2);
            if(!notedge(m) || (nums[m]!= nums[m-1]) && (nums[m]!=nums[m+1]))
            {
                return nums[m];
            }
            else if((notedge( m) && nums[m]<nums[m+1] && !iseven(m)) || (notedge( m) && nums[m]>nums[m-1] && iseven(m)))
            {
                s  = m +1;
            }
            else if((notedge( m) && nums[m]<nums[m+1] && iseven(m)) || (notedge( m) && nums[m]>nums[m-1] && !iseven(m)))
            {
                e  = m -1;
            }
 
            
        }

        return nums[m];
        
    }
};