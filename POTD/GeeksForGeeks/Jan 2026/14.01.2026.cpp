class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        queue<int>q;
        int ans=0,n=arr.size();
        for(int i = 0;i<n;i++)
            if(arr[i]=='T') 
              q.push(i);
        for(int i = 0;i<n;i++)
            if(arr[i]=='P')
            {
                while(!q.empty()&& q.front()<=i+k && abs(i-q.front())>k) 
                  q.pop();
                if(!q.empty() && q.front()<=i+k)
                { 
                    ans+= 1; q.pop();
                    
                }
            }
        return ans;
    }
};
