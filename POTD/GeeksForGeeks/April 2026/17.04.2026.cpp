class Solution {
  public:
    bool canFormPalindrome(string &s) {
        // code here
        unordered_map<char,int> freq;
        for(char c:s) freq[c]++;
        int odd=0;
        for(auto& [c,f]:freq) if(f%2) odd++;
        return odd<=1;
    }
};
