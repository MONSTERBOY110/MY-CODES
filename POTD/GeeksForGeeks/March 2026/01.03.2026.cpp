// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int i,c=0,t;
        for(i=0;i<arr.size();i++)
        {
          if(arr[i]!=0)
           {
               t=arr[i];
               arr[i]=arr[c];
               arr[c]=t;
               c++;
           }
        }
    }
};
