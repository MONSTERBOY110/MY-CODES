class Solution {
  public:
    int minToggle(vector<int>& arr) {
        // code here
        int rightZeros=0;
        for(int num : arr)
            if (num == 0)
                rightZeros++;
        int ans=rightZeros,leftOnes=0;
        for(int num : arr) {
            if (num == 0)
                rightZeros--;
            else
                leftOnes++;
            ans = min(ans, leftOnes + rightZeros);
        }
        return ans;
    }
};
