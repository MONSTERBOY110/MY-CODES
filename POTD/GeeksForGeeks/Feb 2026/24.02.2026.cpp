class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        // code here
        int n=a1.size(),ans=0,sum=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            sum+=a1[i]-a2[i];
            if(sum==0) ans=i+1;
            if(mp.find(sum)!=mp.end()) ans=max(ans,i-mp[sum]);
            else mp[sum]=i;
        }
        return ans;
    }
};
