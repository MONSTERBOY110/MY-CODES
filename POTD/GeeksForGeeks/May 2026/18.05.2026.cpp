class Solution {
  public:
    int maxSum(int n) {
        // code here.
        if(n==0) return 0;
        int sum =max(n,max(n/2,maxSum(n/2))+max(n/3,maxSum(n/3))+max(n/4,maxSum(n/4)));
        return sum;
    }
};
