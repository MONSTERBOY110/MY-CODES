class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size(),i=0,j=0,sum=0,maxi=0;
        for(; j<n; j++){
            sum+=arr[j];
            for(; i<n && (j-i+1>k); i++)
                sum-=arr[i];
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};
