class Solution {
  public:
    string largestSwap(string &s) 
    {
        int n = s.size(),maxIndex = n-1,left = -1, right = -1;
        for(int i = n-2; i >= 0; i--)
        {
            if(s[i] > s[maxIndex])
                maxIndex = i;
            else if(s[i] < s[maxIndex])
            {
                left = i;
                right = maxIndex;
            }
        }
        if(left != -1)
            swap(s[left], s[right]);
        return s;
    }
};
