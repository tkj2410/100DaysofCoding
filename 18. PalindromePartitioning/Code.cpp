vector<vector<string>> partition(string s) {
        vector<string> curr;
        vector<vector<string>> ans;
        solve(ans, curr, s, 0);
        return ans;
    }

    void solve(vector<vector<string>> &ans, vector<string> curr, string s,int index)
    {
        if(index == s.length())
        {
            ans.push_back(curr);
            return;
        }

        for(int i=index; i<s.length();i++){

            if(isPalindrome(s,index,i)){
                string str= s.substr(index, i - index+ 1); 
                curr.push_back(str);
                solve(ans,curr, s, i+1); //update i +1, not index. 
                curr.pop_back();
            }
        }
    
    }
    bool isPalindrome(string s, int left, int right) {
        while (left <= right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }