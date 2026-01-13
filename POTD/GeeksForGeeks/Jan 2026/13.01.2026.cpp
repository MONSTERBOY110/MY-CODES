class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // code here
        int fv=0, tn=0;
        for(int i:arr){
            if(i==5) 
              fv++;
            if(i==10){
                fv--; tn++;
                if(fv<0)
                  return false;
            }
            if(i==20)
            {
                if(tn)
                { 
                    tn--; fv--; 
                }
                else 
                    fv-=3;
                if(fv<0) 
                    return false;
            }
        }
        if(fv<0 || tn<0) 
            return false;
        return true;
    }
};
