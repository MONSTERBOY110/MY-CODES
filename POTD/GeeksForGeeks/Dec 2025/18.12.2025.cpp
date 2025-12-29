class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end(),
          [&](const int a, const int b)
          {
           bool A = a & 1;
           bool B = b & 1;
           if(A && B) return a > b;
           else if(A || B) return A > B;
           else return a < b;
          });
    }
};