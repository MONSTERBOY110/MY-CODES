// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int idx = -1,maxi = 0,r = arr.size(),c = arr[0].size();
        for (int i = 0; i < r; i++) {
            int cnt = arr[i].end() - lower_bound(arr[i].begin(), arr[i].end(), 1);
            if (cnt > maxi) {
                maxi = cnt;
                idx = i;
            }
        }
        return idx;
    }
};