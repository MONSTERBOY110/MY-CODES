class Solution {
  public:
    int optimalKeys(int n)
    {
    int dp[n+1];
    for(int i=0; i<=n; i++)
        dp[i]=i;
    for(int i=3; i<=n; i++)
    {
        int mp = 2;
        for(int j=i-3; j>=0; j--)
        {
            dp[i] = max(dp[i], dp[j]*mp);
            mp++;
        }
    }
    return dp[n];
    }
    
};
