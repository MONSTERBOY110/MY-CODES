class Solution {
  public:
    string findLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end(),[&](int a, int b){
            string as=to_string(a);
            string bs=to_string(b);
            return as+bs>bs+as;
        });
        string res="";
        for(auto&i:arr){
            res+=to_string(i);
        }
        while(res.length()>1 && res[0]=='0') res.erase(res.begin());
        return res;
    }
};
