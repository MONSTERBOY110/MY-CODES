class Solution {
  public:
    int atMostK(vector<int>& arr,int k) {
        int l=0,oddCount=0,res=0;
        for (int r=0;r<arr.size();r++) {
            if (arr[r]%2==1)
                oddCount++;
            while (oddCount>k) {
                if (arr[l]%2==1)
                    oddCount--;
                l++;
            }
            res+=(r-l+1);
        }
        return res;
    }
    int countSubarrays(vector<int>& arr, int k) {
        return atMostK(arr,k)-atMostK(arr,k-1);
    }
};
