
int solve(int day,int last, vector<vector<int>> &points, vector<vector<int>> &dp)
{
    if(day == 0)
    {
        int maxi =0;
        for(int i=0;i<3;i++)
        {
            if(i != last){
                maxi=max(maxi,points[0][i]);
            }
        }
        return maxi;
    }

    if(dp[day][last]!= -1)
    {
        return dp[day][last];
    }

    int maxi =0;
    for(int i=0;i<3;i++)
    {
        //int ans=0;
        if(last != i)
        {
            int ans = points[day][i] + solve(day-1,i,points,dp);
            maxi = max(maxi,ans);
        }
    }
    return dp[day][last] =maxi;    

}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>> dp(n, vector<int>(4,-1));

    return solve(n-1,3, points,dp);
}