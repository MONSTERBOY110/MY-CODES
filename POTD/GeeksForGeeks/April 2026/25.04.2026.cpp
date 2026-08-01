class Solution {
  public:
    vector<int> reducePairs(vector<int>& arr) {
        // code here
        int n=arr.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(arr[i]);
            }
            else{
                int a=st.top();
                int b=arr[i];
                if(a==b || (a>0 && b>0) || (a<0 && b<0)){
                    st.push(arr[i]);
                }
                else if(abs(a)==abs(b)){
                    st.pop();
                }
                else if(a==0 || b==0){
                    if(a==0){
                        st.pop();
                        st.push(b);
                    }
                }
                else if((a>0 && b<0) || (a<0 && b>0)){
                    while(!st.empty() && abs(st.top())<abs(b)){
                        st.pop();
                    }
                    if(st.empty()){
                        st.push(b);
                    }
                    else if(abs(st.top())==abs(b)){
                        st.pop();
                    }
                }
            }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
