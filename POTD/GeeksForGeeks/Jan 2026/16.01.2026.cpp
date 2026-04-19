class Solution {
  public:
    int minMen(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<pair<int,int>> intervals;
        for(int i=0;i<n;i++){
            if(arr[i] != -1){
                int l=max(0,i-arr[i]),r=min(n-1,i+arr[i]);
                intervals.push_back({l, r});
            }
        }
        sort(intervals.begin(),intervals.end());
        int ans=0,curr=0,i=0;
        while(curr<n){
            int farthest=-1;
            while(i < intervals.size() && intervals[i].first <= curr){
                farthest=max(farthest,intervals[i].second);
                i++;
            }
            if(farthest<curr){
                return -1; 
            }
            ans++;
            curr=farthest+1;
        }
        return ans;
    }
};
