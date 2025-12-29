class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int n= a.size(),m = b.size(),i =0,j=0;
        while(i<n && j<m){
            if(a[i] < b[j]){
                if(k==1)
                    return a[i];
                i++;k--;
            }
            else{
                if(k==1)
                    return b[j];
                j++;k--;
            }
        }
        while(i<n){
            if(k==1)
                return a[i];
            i++;k--;
        }
        while(j<m){
            if(k==1)
                return b[j];
            j++;k--;
        }
    }
};
