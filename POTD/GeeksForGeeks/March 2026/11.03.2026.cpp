class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
       stack<pair<int,pair<int,int>>>s;
       s.push({arr[0],{arr[0],0}});
       int ans =arr[0],tempans=0;
       for(int i=1;i<arr.size();i++){
           if(s.top().first<=arr[i])
               tempans+=s.top().second.first+(i-s.top().second.second)*arr[i];
           else{
               tempans+=arr[i];
               while(!s.empty()&&s.top().first>arr[i]){
                   s.pop();
               }
               if(!s.empty())
                   tempans+=(s.top().second.first)+(i-s.top().second.second-1)*arr[i];
               else
                   tempans+=i*arr[i];
               
           }
           s.push({arr[i],{tempans,i}});
           ans+=tempans;
           tempans=0;
       }
        return ans;
    }
};
