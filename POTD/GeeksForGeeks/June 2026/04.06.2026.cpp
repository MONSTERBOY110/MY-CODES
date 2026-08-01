class Solution {
  public:
    int maxSubstring(string &s) {
        // code here
        int n = s.size(),zero = 0,ans = -1;
        for(int i=0;i<n;i++){
            if(s[i]=='1')zero--;
            else zero++;
            if(zero<=0)zero=0;
            else ans = max(ans,zero);
            
        }
        return ans;
    }
};
