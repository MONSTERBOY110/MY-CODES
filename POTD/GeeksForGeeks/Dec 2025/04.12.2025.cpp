class Solution {
  public:
    int minCost(vector<int> &keys, vector<int> &freq) {
        // code here
        int n = keys.size();
        vector<vector<int>> dp(n, vector<int>(n));
        vector<vector<int>> opt(n, vector<int>(n));
        vector<int> pre(n+1);
        for(int i=0;i<n;i++) pre[i+1]=pre[i]+freq[i];
        auto sum=[&](int l,int r){ return pre[r+1]-pre[l]; };
        
        for(int i=0;i<n;i++){
            dp[i][i]=freq[i];
            opt[i][i]=i;
        }
        for(int len=2;len<=n;len++){
            for(int i=0;i+len-1<n;i++){
                int j=i+len-1;
                dp[i][j]=INT_MAX;
                int l=opt[i][j-1], r=opt[i+1][j];
                for(int k=l;k<=r;k++){
                    int left = k>i ? dp[i][k-1] : 0;
                    int right = k<j ? dp[k+1][j] : 0;
                    int val = left + right + sum(i,j);
                    if(val < dp[i][j]){
                        dp[i][j]=val;
                        opt[i][j]=k;
                    }
                }
            }
        }
        return dp[0][n-1];
    }
};