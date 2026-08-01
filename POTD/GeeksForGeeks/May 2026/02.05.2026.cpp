class Solution {
  public:
    int findPosition(int n) {
        // code here
        int i = 0,count = 1;
        if(n==0) return -1;
        while(n){
            if(count>1) return -1;
            count += n & 1;
            n >>= 1;
            i++;
        }
        return i;
    }
};
