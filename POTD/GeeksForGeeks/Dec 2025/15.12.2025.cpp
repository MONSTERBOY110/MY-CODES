class Solution {
  public:
    int cntWays(vector<int>& arr) {
        // code here
        int n=arr.size();
        int evenSum=0,oddSum=0;
        for(int i=0;i<n;i++){
            if(i%2==0)evenSum+=arr[i];
            else oddSum+=arr[i];
        }
        int cnt=0;
        int tEven=0,tOdd=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                tEven+=arr[i];
                int x=oddSum-tOdd;
                int y=evenSum-tEven;
                if(x+tEven-arr[i] == tOdd+y)cnt++;
            }
            else{
                tOdd+=arr[i];
                int x=oddSum-tOdd;
                int y=evenSum-tEven;
                if(x+tEven == tOdd+y-arr[i])cnt++;
            }
        }
        return cnt;
    }
};