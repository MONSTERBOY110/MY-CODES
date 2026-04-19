class Solution {
  public:
    int fun(string &s, int k){
        int ans=0, i=0, j=0, dist=0;
        vector<int>freq(26,0);
        while(i<s.size()){
            if(freq[s[i]-'a']++==0){dist++;}
            while(dist>k){
                if(--freq[s[j]-'a']==0){dist--;}
                j++;
            }
            ans+=i-j+1;
            i++;
        }
        return ans;
    }
    int countSubstr(string& s, int k) {
        return fun(s, k)-fun(s, k-1);
    }
};
