class Solution {
  public:
     int solve(int i,int n,vector<int>&arr,int x,vector<vector<int>>&dp)
     {
        if(i == n)
            return x;
        if(dp[i][x]!=-1)
            return dp[i][x];
        return dp[i][x] = solve(i+1,n,arr,x^arr[i],dp)+solve(i+1,n,arr,x,dp);
    }
    int subsetXORSum(vector<int>& arr) {
        // code here
        int sum = 0;
        for(int i:arr)
            sum+=i;
        vector<vector<int>>dp(arr.size()+1,vector<int>(sum,-1));
        return solve(0,arr.size(),arr,0,dp);
    }
};