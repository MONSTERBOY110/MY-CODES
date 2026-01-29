class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        int n=s.length();
        queue<char> q;
        unordered_map<char,int> mp;
        string res="";
        for(int i=0;i<n;i++){
            if(++mp[s[i]]==1) q.push(s[i]);
            while(!q.empty() && mp[q.front()]>1) q.pop();
            res+=q.empty()?'#':q.front();
        }
        return res;
    }
};
