class Solution {
  public:
    string minWindow(string& s1, string& s2) {
        // Code here
        int i=0,j=0,n=s1.length(),m=s2.length(),len=INT_MAX;
        string ans = "";
        while (i < n) {
            if (s1[i] == s2[j]) 
              j++;
            if (j == m) {
                int end = i;
                j = m - 1;
                while (i >= 0 && j >= 0) {
                    if (s1[i] == s2[j]) j--;
                    i--;
                }
                i++;
                if (end - i + 1 < len) {
                    len = end - i + 1;
                    ans = s1.substr(i, len);
                }
                j = 0;
            }
            i++;
        }
        return ans;
    }
};
