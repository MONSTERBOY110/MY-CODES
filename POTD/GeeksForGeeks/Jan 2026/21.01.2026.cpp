class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>ans(n, 1);
        stack<pair<int, int>>st;
        st.push({arr[0], 1});
        for(int i=1; i<n; i++){
            while(!st.empty() && st.top().first<=arr[i]){
                ans[i]+=st.top().second;
                st.pop();
            }
            st.push({arr[i], ans[i]});
        }
        return ans;
    }
};
