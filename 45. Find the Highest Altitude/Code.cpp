    int largestAltitude(vector<int>& gain) 
    {

        vector<int> ans;
        ans.push_back(0);
        for(int i=0; i<gain.size(); i++)
        {
            ans.push_back(ans[i] + gain[i]);
        }

        return *max_element(ans.begin(), ans.end());
        
    }