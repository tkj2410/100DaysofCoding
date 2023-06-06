int longestPalindrome(string s) {
        unordered_map<char, int> map;
        for(int i=0;i<s.length(); i++){
            map[s[i]]++;
        }

        int oddcount=0;
        for (auto const& element : map)
        {
            if(element.second % 2 ==1)
            {
                oddcount++;
            }
        }
        if(oddcount>1)
        {
            return s.length() - oddcount +1;
        }

        return s.length();
    }