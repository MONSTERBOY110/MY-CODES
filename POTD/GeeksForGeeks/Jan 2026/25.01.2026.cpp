class Solution {
  public:
    int ans=0;
    void f(int o,int c){
        if(!o and !c) ans++;
        if(c>o) f(o,c-1);
        if(o) f(o-1,c);
    }
  
    int findWays(int n) {
        if(n%2) return 0;
        int o=n/2,c=n/2;
        f(o-1,c);
        
        return ans;
    }
};
