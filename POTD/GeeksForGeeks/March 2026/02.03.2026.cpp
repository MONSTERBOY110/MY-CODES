class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        stack<int> st;
        int res=0;
        for(int i =0;i<arr.size();i++)
        {
            while(!st.empty()&&arr[st.top()]<arr[i])
            {
                int pop_height = arr[st.top()];
                st.pop();
                if(st.empty())
                  break;
                int distance = i - st.top()-1,water = min(arr[st.top()],arr[i])-pop_height;
                res+=distance*water;
            }
            st.push(i);
        }
        return res;
    }
};
