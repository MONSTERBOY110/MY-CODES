class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        int n = s1.length(),m = s2.length();
        if (n != m)
          return false;
        int ptr1 = 0, ptr2 = 0,cnt = 0;
        while ((ptr1 < n && ptr2 - ptr1 < n && cnt < n)){
          if (s1[ptr1 % n] == s2[ptr2 % n]) {
             ptr1++;
             cnt++;
          } 
          else{
             if(ptr1 > 0 && ptr2 > 0)
               ptr2--; 
             ptr1 = 0;
             cnt = 0;
          }
          ptr2++;
        }
        if (cnt == n)
          return true;
        return false;
    }
};