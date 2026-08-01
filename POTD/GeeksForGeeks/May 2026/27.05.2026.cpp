class Solution {
  public:
    bool wifiRange(string &s, int x) {
        // code here
        int n=s.length();
        int flg=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(i-x>flg){
                    return 0;
                } 
                flg=max(flg,i+x+1);
            }
        }
        return flg>=n;
    }
};
