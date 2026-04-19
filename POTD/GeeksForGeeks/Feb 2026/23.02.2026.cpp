class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int>st;
        for(int i=0;i<a.size();i++)
           st.insert(a[i]);
        for(int i=0;i<b.size();i++)
           st.insert(b[i]);  
        vector <int> res;
        for(auto it:st)
          res.push_back(it);
        return res;  
    }
};
