string getHint(string secret, string guess) {
        int cow=0,bull=0;
        string ans="";
        unordered_map<char,int> map;
        for(int i=0; i<secret.length(); i++)
        {

            if(secret[i] == guess[i])
            {
                bull++;
            }
            map[secret[i]] ++;

        }

        for(int i=0; i<guess.length();i++)
        {
            if(map[guess[i]] >0)
            {
                cow++;
                map[guess[i]] --;
            }
        }
        cow = cow -bull;
        ans=to_string(bull)+"A" + to_string(cow) +"B";
        return ans;
    }