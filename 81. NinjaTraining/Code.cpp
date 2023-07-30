
/*int solve(int day,int last, vector<vector<int>> &points, vector<vector<int>> &dp)
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

}*/

int solve_tab(int n, vector<vector<int>> &points)
{
     vector<vector<int>> dp(n, vector<int>(4,-1));

     dp[0][0] = max(points[0][1],points[0][2]);
     dp[0][1] = max(points[0][0],points[0][2]);
     dp[0][2] = max(points[0][1],points[0][0]);
     dp[0][3] = max(points[0][3],max(points[0][1],points[0][2]));

     int maxi = 0;
     for(int day=1;day<n;day++)
     {
        for(int last=0;last<4;last++)
        {
           // dp[day][last] = 0;
            for(int i=0;i<3;i++)
            {
                if(i!=last) // boomer
                {
                    int ans = points[day][i] + dp[day-1][i];
                    dp[day][last] = max(dp[day][last],ans);

                }           
            }
        }
     }
     return dp[n-1][3];

}

int solve_space(int n, vector<vector<int>> &points)
{
    vector<int> prev(4,-1);

     prev[0] = max(points[0][1],points[0][2]);
     prev[1] = max(points[0][0],points[0][2]);
     prev[2] = max(points[0][1],points[0][0]);
     prev[3] = max(points[0][3],max(points[0][1],points[0][2]));

     int maxi = 0;
     for(int day=1;day<n;day++)
     {
        vector<int> temp(4,-1);

        for(int last=0;last<4;last++)
        {

            for(int i=0;i<3;i++)
            {
                if(i!=last) // boomer
                {
                    temp[last]= max(temp[last],points[day][i] + prev[i]);
                }           
            }
        }
        prev =temp;
     }
     return prev[3];


}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    //vector<vector<int>> dp(n, vector<int>(4,-1));

    //return solve(n-1,3, points,dp);
    //return solve_tab(n,points);
    return solve_space(n,points);

}