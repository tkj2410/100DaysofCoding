 bool isAnagram(string s, string t) {

        unordered_map<char,int> map;

        int len = s.length();

        if(len!=t.length()){
            return false;
        }

        for(int i=0; i<len ; i++)
        {
            map[s[i]]++;
        }
        for(int i=0; i<len ; i++)
        {
            if(map[t[i]]<=0){
                return false;
            }
            map[t[i]] --;
        }

        return true;
        
    }