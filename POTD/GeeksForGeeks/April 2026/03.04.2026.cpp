class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        // code here
        int n=mat.size(),m=mat[0].size();
        vector<int> ans;
        for(int d=0;d<m+n-1;d++){
            int row=(d<m)?0: d-m+1,col=(d<m)? d:m-1;
            while(row<n && col>=0){
                ans.push_back(mat[row][col]);
                row++;
                col--;
            }
        }
        return ans;
    }
};
