void reverseString(vector<char>& str) {
        
        stack <char> s;
        vector<char> ans;
        for(int i=0;i< str.size();i++){
            char ch=str[i];
            s.push(ch);
        }
        
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        str=ans;
        
    }