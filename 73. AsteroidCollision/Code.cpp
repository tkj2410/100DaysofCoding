vector<int> asteroidCollision(vector<int>& asteroids) {

        vector<int> ans = asteroids;

        int i = 0;
        while(i<ans.size()-1 && !ans.empty())
        {
            if((ans[i+1]<0) && (ans[i]<0) || (ans[i+1]>0) && (ans[i]>0))
            {
                i++;
            }
            else
            {
                if(ans[i]>0){
                
                    if((abs(ans[i+1])) < abs(ans[i]))
                    {
                        ans.erase(ans.begin()+i+1);
                        if(i!=0)
                        {
                            i = i-1;
                        }
                        continue;
                    }
                    else if((abs(ans[i+1])) > abs(ans[i]))
                    {
                        ans.erase(ans.begin()+i);
                        if(i!=0)
                        {
                            i = i-1;
                        }
                        continue;

                    }
                    else if((abs(ans[i+1])) == abs(ans[i]))
                    {
                        ans.erase(ans.begin()+i+1);
                        ans.erase(ans.begin()+i);
                        if(i!=0)
                        {
                            i = i-1;
                        }
                        //continue;
                    }
                }
                else
                {
                    i++;
                } 
            }

        }

        return ans;
        
    }