void solve(string str,string temp, vector<string> &ans, int n, 
    vector<bool> &visited,int &count,int k)
    {

        if(temp.size() == str.size())
        {
            ans.emplace_back(temp);
            count++;
            if(count == k){
                return;
            }
        }
        for(int i=0;i<str.length();i++)
        {
            if(!visited[i])
            {
                visited[i]=true;
                temp += str[i];
                solve(str,temp,ans,n,visited ,count,k);
                temp.pop_back();
                visited[i]=false;
                
            }
            if(count == k){
                return;
            }

        }

    }

    string getPermutation(int n, int k) {

        vector<string> ans;
        string str="";
        string temp="";

        vector<bool> visited(n, false);
        for(int i=1;i<=n;i++){
            str+=to_string(i);
        }
        int count=0;

        solve(str,temp,ans, n, visited ,count,k);
        return ans.back();
        
    }