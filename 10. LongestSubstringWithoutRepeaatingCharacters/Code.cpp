    void markmap(string s, int len,unordered_map<char,bool> &map2)
    {
        for(int i=0;i<len;i++){
            //map[s[i]]++;
            map2[s[i]] = false;
        }
    }

    int lengthOfLongestSubstring(string s) {

        unordered_map<char,bool> map1;
        unordered_map<char,bool> map2;
        int len = s.length();

        markmap(s,len, map2);
        markmap(s,len, map1);
        int count=0;
        int ans=0;
        int j=0;
        int i=0;

        while( j<len){
            if(map2[s[j]] == false)
            {
                count+=1;
                map2[s[j]] = true;
                j++;
            }
            else{
                //markmap(s,len, map2);
                map2=map1;
                i++;
                j=i;
                
                count=0;

            }
            ans=max(ans,count);
        }
        return ans;
    }   
  