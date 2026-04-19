class Solution {
  public:
    bool checkRedundancy(string &s) {
        // code here
        stack<char>st;
        bool flag=true;
        for(char c:s){
            if(!isalnum(c))
            st.push(c);
            if(c==')'){
                 st.pop();
                while(st.top()!='('){
                  char k=st.top();
                     st.pop();
                     flag=false;
                }
                st.pop();
                if(flag)
                return true;
            }
            flag=true;
        }
        return false;
    }
};
