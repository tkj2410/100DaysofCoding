#include <bits/stdc++.h> 
/*bool solve(int index, int target, vector<int> &arr,vector<vector<int>> &dp)
{

    if(target == 0)
    {
        return true;
    }
    if(index == 0)
    {
        return (arr[0] == target);
    }

    if(dp[index][target]!=-1)
    {
        return (dp[index][target] == 1);
    }
    bool nottake = solve(index-1,target,arr,dp);
    bool take = false;
    if(arr[index]<=target)
    {
        take = solve(index-1,target - arr[index], arr,dp);
        
    }

    return ((dp[index][target])=take || nottake);
}*/


/*bool solve_tab(int index, int target, vector<int> &arr)
{
    vector<vector<bool>> dp(index+1, vector<bool>(target+1,false));
    for(int i=0;i<=index;i++)
    {
        dp[i][0] = true;
    }

    dp[0][arr[0]] = true; ///tricky part
    

    for(int i=1;i<=index;i++)
    {
        for(int tar=1;tar<=target;tar++)
        {
           
                bool nottake = dp[i-1][tar];
                bool take = false;
                if(arr[i]<=tar)
                {
                    take = dp[i-1][tar- arr[i]]; 
                }
                dp[i][tar]= take || nottake;
        }
    }

    return dp[index][target];
}
*/
bool solve_space(int index, int target, vector<int> &arr)
{
     vector<bool>dp (target+1,false);

    dp[0] = true;
    dp[arr[0]] = true; ///tricky part
    //prev1 = true;

    for(int i=1;i<=index;i++)
    {
        vector<bool> temp(target+1,false);
        temp[0] =true;
        for(int tar=1;tar<=target;tar++)
        {
           
                bool nottake = dp[tar];
                bool take = false;
                if(arr[i]<=tar)
                {
                    take = dp[tar- arr[i]]; 
                }
                temp[tar]= take || nottake;
        }
        dp=temp;
    }

    return dp[target];
}

bool subsetSumToK(int n, int k, vector<int> &arr) {

    //vector<vector<int>> dp(n, vector<int>(k+1,-1));
    //return solve(n-1,k,arr,dp);

   // return solve_tab(n-1,k,arr);
   return solve_space(n-1,k,arr);
}