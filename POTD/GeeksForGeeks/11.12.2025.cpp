class Solution {
  public:
    vector<int> constructArr(vector<int>& arr) {
        // code here
        int n = (int)(sqrt(arr.size()*2)) + 1;
        vector<int> res(n);
        res[0] = (arr[0] + arr[1] - arr[n-1]) / 2;
        for(int i=1;i<n;i++)
        res[i] = arr[i-1] - res[0];
        return res;
    }
};