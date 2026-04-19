class Solution {
  public:
    int overlapInt(vector<vector<int>> &arr) {
        // code here
        int n = arr.size();
        vector<int>s(n),e(n);
        for(int i=0;i<n;i++){
            s[i] = arr[i][0];
            e[i] = arr[i][1];
        }
        sort(s.begin(), s.end());
        sort(e.begin(), e.end());
        int curr = 0,maxi = 0,i = 0, j = 0;
        while(i < n){
            if(s[i] <= e[j]){
                curr++;
                maxi = max(maxi, curr);
                i++;
            }
            else{
                curr--;
                j++;
            }
        }
        return maxi;
    }
};
