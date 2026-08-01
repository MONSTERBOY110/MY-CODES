class Solution {
  public:
    bool isBinaryPalindrome(int n) {
        // code here
        string tmp="";
        while(n){
            tmp+=to_string(n&1);
            n=n>>1;
        }
        int i=0, j=tmp.length()-1;
        while(i<=j){
            if(tmp[i]!=tmp[j]) return false;
            i++, j--;
        }
        return true;
    }
};
