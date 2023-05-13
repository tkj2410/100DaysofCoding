string reverseWords(string s) {
        
        stack<string> stk;
        string str="";
        //cout<<s.length();
        s+=" ";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' '){
                str+=s[i];
            }
            else{
                if(str!="")
                {

                    stk.push(str);
                }
                str="";
            }
        }
        string ans="";
        while(!stk.empty()){
            ans+=stk.top();
            ans+=" ";
            stk.pop();
        }
        ans.erase(ans.length()-1);
        return ans;

    }