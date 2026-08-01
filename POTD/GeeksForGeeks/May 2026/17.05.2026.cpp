class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        vector<int> res;
        for(int i=0;i<arr.size();i++){
            if(res.size() == 0)
               res.push_back(arr[i]);
            else{
                if((res.back()>0 && arr[i]<0) or (res.back()<0 && arr[i]>0) or 
                (arr[i] == 0 and res.back()<0) or (res.back() == 0 and arr[i]<0))   
                    res.pop_back();
                else 
                    res.push_back(arr[i]);
            }
        }
        return res;
    }
};
