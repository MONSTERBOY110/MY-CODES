class Solution {
  public:
    int maxProfit(vector<int>& arr, int k) {
        // Code here
        int n = arr.size(),hold = -arr[0],cash = 0;
        for (int i = 1; i < n; i++) {
            int prevCash = cash;
            hold = max(hold, prevCash - arr[i]);
            cash = max(cash, hold + arr[i] - k);
        }
        return cash;
    }
};
