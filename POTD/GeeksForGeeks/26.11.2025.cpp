class Solution {
  public:
    using ll=long long;
    int andInRange(int l, int r) {
        // code here
        int ans=0;
        for(int b=30;b>=0;b--){
            ll group_size=1ll<<(b+1),cnt=1ll<<b;
            ll pos=l%group_size;
            if(pos>=cnt){
                ll nxt=(l/group_size+1)*group_size;
                if(nxt>r)
                    ans=ans|cnt;
            }
        }
        return ans;
    }
};