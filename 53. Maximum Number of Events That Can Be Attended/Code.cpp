int maxEvents(vector<vector<int>>& events) {
        
        sort(events.begin(), events.end());
        int count = 0;
        int maxi = 0;
        for(auto x: events)
        {
            maxi = max(maxi,x[1]);
        }

        priority_queue<int, vector<int>, greater<int>> min_heap;

        int j=0;
        for(int i=1;i<=maxi; i++)
        {
            while(!min_heap.empty() && min_heap.top() < i){
                min_heap.pop();
            }

            while(j <events.size()  && events[j][0] == i){
                min_heap.push(events[j++][1]);
            }

            if(!min_heap.empty()){
                count++;
                min_heap.pop();
            }

            
        }

        return count;

    }