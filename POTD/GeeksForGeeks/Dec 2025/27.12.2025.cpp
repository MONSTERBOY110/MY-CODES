class Solution {
  public:
    
    int check(vector<vector<int>> &arr, int mid){ // we search mid in whole mat every time in order of n.
        
        int i = 0;
        int j = arr[0].size()-1;
        int count = 0;
        
        while(i<arr.size() && j>=0){
            
            if(arr[i][j]<=mid){
                count+=j+1;
                i++;
            }
            else{
                j--;
            }
        }
        return count;
        
    }
    
    int kthSmallest(vector<vector<int>> &arr, int k) {
        // code here
        int n = arr.size(); // we are searching on arr[max]-arr[min];
        int ans = 0;
        
        int start = arr[0][0];
        int end = arr[n-1][n-1];
        
        
        while(start<=end){
            int mid = start+((end-start)/2);
            
            int count = check(arr,mid); 
            
            if(count<k){ 
                start=mid+1;
            }
            else{
                ans = mid;
                end = mid-1;
            }
            
        }
        
        return ans;
        
        
    }
};
