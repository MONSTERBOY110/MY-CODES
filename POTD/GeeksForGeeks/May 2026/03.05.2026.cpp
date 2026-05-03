class Solution {
  public:
    vector<int> sortBySetBitCount(vector<int>& arr) {
        // code here
        vector<pair<int,int>> v;
        vector<int> ans ;
        int n = arr.size() ;
        for(int i=0;i<n;i++){
            int ff = __builtin_popcount(arr[i]);
            v.push_back({ff,-i});
        }
        
        sort(v.rbegin(),v.rend()) ;
        for(auto [a,b] : v) ans.push_back(arr[-b]);
        
        return ans ;
    }
};
