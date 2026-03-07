class Solution {
  public:
    int solve(int faces, int dice, int remSum, vector<vector<int>>&dp){
        if(dice==0){
            if(remSum==0){
              return 1;
            }
            return 0;
        }
        if(remSum<0) return 0;
        if(dp[dice][remSum]!=-1) return dp[dice][remSum];
        int ways=0;
        for(int m=1; m<=faces; m++){
            ways+=solve(faces, dice-1, remSum-m, dp);
        }
        return dp[dice][remSum]=ways;
    }
  
    int noOfWays(int m, int n, int x) {
        // code here
        vector<vector<int>>dp(n+1, vector<int>(x+1, -1));
        return solve(m, n, x, dp);
    }
};
