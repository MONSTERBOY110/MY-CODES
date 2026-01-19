class Solution {
  public:
    string removeKdig(string &s, int k) {
        // code here
        stack<char>st;
        string ans="";
        int count=0;
        for(auto & i:s){
            while(!st.empty() && st.top()>i && count<k){
                st.pop();
                count++;
            }
            if(st.empty() && i=='0')continue;
            st.push(i);
        }
        while(!st.empty() && count<k){
            st.pop();
            count++;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        if(ans.size()==0) return "0";
        return ans;
    }
};
