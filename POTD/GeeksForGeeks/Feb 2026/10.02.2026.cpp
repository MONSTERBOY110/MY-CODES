class Solution {
    bool solve(vector<int>&arr,int mid,int k){
        int cnt=0;
        for(int i=0;i<arr.size();i++){ 
            cnt=cnt+(arr[i]/mid);
            if(arr[i]%mid!=0)
                cnt=cnt+1;
        }
        return cnt<=k;
    }
  public:
    int kokoEat(vector<int>& arr, int k) {
        int n=arr.size(),maxi=INT_MIN;
        for(int i=0;i<arr.size();i++)
            maxi=max(maxi,arr[i]);
        int left=1,right=maxi,ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(solve(arr,mid,k)){
               ans=mid;
               right=mid-1;
           }
           else
               left=mid+1;
       }
       return ans;
    }
};
