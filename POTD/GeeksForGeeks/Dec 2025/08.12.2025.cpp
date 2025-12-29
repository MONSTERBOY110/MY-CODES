class Solution {
  public:
    string matrixChainOrder(vector<int> &arr) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        vector<vector<string>> bracket(n, vector<string>(n));
        char matrixName = 'A';
        for (int i = 1; i < n; ++i) {
            bracket[i][i] = string(1, matrixName++);
        }
        for (int len = 2; len < n; ++len) {
            for (int i = 1; i <= n - len; ++i) {
                int j = i + len - 1;
                dp[i][j] = INT_MAX;
                for (int k = i; k < j; ++k) {
                    int cost = dp[i][k] + dp[k + 1][j] + arr[i - 1] * arr[k] * arr[j];
                    if (cost < dp[i][j]) {
                        dp[i][j] = cost;
                        bracket[i][j] = "(" + bracket[i][k] + bracket[k + 1][j] + ")";
                    }
                }
            }
        }
        return bracket[1][n - 1];
    }
};