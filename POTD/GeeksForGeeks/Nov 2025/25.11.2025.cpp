//Game Of XOR
class Solution {
  public:
    int subarrayXor(vector<int>& arr) {
        // code here
        int n =arr.size();
            int res = 0;
            
            for(int i=0;i<n;i++){
 
                 int total = (i+1)*(n-i);
                 if (total%2==0) continue;
                   res^=arr[i];
            }
        return res;
    }
};