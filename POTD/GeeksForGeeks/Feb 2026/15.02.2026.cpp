class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int n=a.size(),mini=1e9;
        sort(a.begin(), a.end());
        for(int i=m-1; i<n; i++)
            mini=min(mini, a[i]-a[i-m+1]);
        return mini;
    }
};
