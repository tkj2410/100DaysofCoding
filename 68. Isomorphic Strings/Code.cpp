bool isIsomorphic(string s, string t) {

        map<char,char> map;
        char c1,c2;
        set<char> set;

        for(int i=0; i<s.length(); i++)
        {
            c1=s[i];c2=t[i];
            if(map.find(c1) != map.end())
            {
                if(map[c1]!= c2){
                    return false;
                }
            }
            else
            {
                if(set.find(c2) != set.end())
                {
                    return false;
                }
                set.insert(c2);
                map[c1]=c2;
            }

        }
        return true;

        
    }