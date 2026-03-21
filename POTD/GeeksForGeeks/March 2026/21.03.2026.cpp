class Solution {
  public:
      pair<int,int> gre(vector<int> &a , int tar){
        int idx = lower_bound(a.begin() , a.end() , tar) - a.begin();
        
        return {idx , a.size()-idx-1};
    }
    int ncr(int n){
        if(n == 0 || n == 1) return 1;
        if(n == 2) return 2;
        if(n == 3) return 6;
        
        return n*ncr(n-1);
    }
    vector<int> countBSTs(vector<int>& arr) {
        // Code here
        int n = arr.size();
        vector<int> a = arr;
        sort(begin(a) , end(a));
        vector<int> ans;
        
        pair<int,int> p;
        for(int i = 0 ; i < n ; i++){
            p = gre(a , arr[i]);
            int l = p.first;
            int r = p.second;
            
            int c = ncr(2*l)/(  (ncr(l+1)) * (ncr(l)) );
            int d = ncr(2*r)/(  (ncr(r+1)) * (ncr(r)) );
            
            ans.push_back(c*d);
        }
        
        return ans;
    }
};
