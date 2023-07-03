bool buddyStrings(string s, string goal) {

        if(s.length() != goal.length()){
            return false;
        }

        int count=0;
        unordered_map<int,char> index_map;
        unordered_map<char,int> char_map;

        bool flag = false;

        vector<int> index;
        for(int i=0;i<s.length(); i++)
        {
            char_map[s[i]]++;
            index_map[i] = s[i];
        }

        for(int i=0;i<goal.length(); i++)
        {
            if (char_map.find(goal[i]) == char_map.end()){
                return false;
            }
            
            if(char_map[goal[i]] >1){
                flag = true;
            }
            
            if(index_map[i] != goal[i]){
                count++;
                index.push_back(i);
            }
        }

        if(s == goal && flag){
            return true;
        }
        if(s == goal && !flag){
            return false;
        }

        if(count>2){
            return false;
        }

        int ind1 = index[0];
        int ind2 = index[1];

        if(s[ind1] != goal[ind2]){
            return false;
        }

        if(s[ind2] != goal[ind1]){
            return false;
        }
        

        return true;


    }