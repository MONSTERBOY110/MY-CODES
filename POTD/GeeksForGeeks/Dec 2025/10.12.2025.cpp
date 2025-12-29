class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int a=0,b=0,n=arr.size();
        vector<int>freq(n+1);
        for(int i=0;i<=n;i++){
            freq.push_back(i);
        }
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(freq[i]==0){
                b=i;
            }
            else if(freq[i]==2){
                a=i;
            }
        }
        return {a,b};
    }
};
