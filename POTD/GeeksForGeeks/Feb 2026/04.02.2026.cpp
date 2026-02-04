class Solution {
  public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        // code here
        int mx=INT_MIN;
        for(int i=0; i<left.size(); i++) 
        {
            mx=max(mx,left[i]);
        }
        for(int j=0; j<right.size(); j++) 
        {
            mx=max(mx,n-right[j]);
        }
        return mx;
    }
};
