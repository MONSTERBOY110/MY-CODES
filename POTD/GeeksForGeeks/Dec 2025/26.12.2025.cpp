class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        for(int i=0;i<arr.size() && arr[i]<=k;i++){
            k++;
        }
        return k;
    }
};
