class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // code here
        int n=arr.size(),c=0,ht=arr[0];
        for(int i=1;i<n;i++){
            if(ht>arr[i]){
                c++;
            }
            ht=max(ht,arr[i]);
        }
        return n-c;
    }
};
