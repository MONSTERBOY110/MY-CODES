class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int ans = 0,n = arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i] <= arr[n-1]) break;
            ans++;
        }
        return ans;
    }
};
