    int findTheWinner(int n, int k) {

        vector<int> arr;
        for(int i=1;i<=n;i++)
        {
            arr.push_back(i);
        }

        int ind;
        int current=0;
        while(arr.size()>1)
        {
            ind = (current + (k-1)) % arr.size();
            arr.erase(arr.begin() + ind);
            current = ind;
        }
        return arr[0];
        
    }