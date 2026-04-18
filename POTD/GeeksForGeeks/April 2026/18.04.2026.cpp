class Solution {
  public:
    int maxOnes(vector<int>& arr) {
        // code here
        stack<int> st;
        int ans = 0, ctr = 0;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] == 1) {
                if(st.size()) st.pop();
                ctr++;
            } else {
                st.push(0);
                ans = max(ans, (int)st.size());
            }
        }
        return ans + ctr;
    }
};
