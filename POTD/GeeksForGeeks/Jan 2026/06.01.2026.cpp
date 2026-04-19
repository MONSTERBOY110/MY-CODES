class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int n = arr.size(),curr = 0;
        for (int i = 0; i < k; i++)
            curr ^= arr[i];
        int maxx = curr;
        for (int i = k; i < n; i++) {
            curr = curr ^ arr[i - k] ^ arr[i];
            maxx = max(maxx, curr);
        }
        return maxx;
    }
};
