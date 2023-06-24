int solve(vector<int> nums, vector<int> &dp,int index){

    if(index == 0){
        return nums[index];
    }
    if(index<0){
        return 0;
    }
    if(dp[index] != -1){
        return dp[index];
    }

    int pick = nums[index]+ solve(nums, dp, index-2);
    int nonpick = 0 + solve(nums,dp, index-1);

    dp[index]= max(pick, nonpick);
    return dp[index];


}
int maximumNonAdjacentSum(vector<int> &nums){
    int ind=nums.size()-1;
    vector<int> dp(ind+1,-1);
    int ans = solve(nums,dp,ind);
    return ans;
}