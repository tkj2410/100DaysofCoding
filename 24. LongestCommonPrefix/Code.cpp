
    string longestCommonPrefix(vector<string>& str) {
        string ans="";
        sort(v.begin(),v.end());
        int n=v.size();
        string first=v[0],last=v[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
               break;
            }
            ans+=first[i];
        }
        return ans;
    }