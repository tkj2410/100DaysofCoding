static bool sortcol( pair<int,int> v1,  pair<int,int> v2)
    { 
        return v1.second < v2.second; 
    } 
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> time;
        
        for(int i=0;i<n;i++){
            time.push_back(make_pair(start[i],end[i]));
        }
        
        sort(time.begin(), time.end(), sortcol);
        
        int count =1;
        int ans=time[0].second;
        
        for(int i=1;i<n; i++)
        {
            if(time[i].first>ans){
                count++;
                ans=time[i].second;
            }
            
        }
        return count;
    }