class Solution {
  public:
    int numOfWays(int n, int m) {
        // code here
         const int total = (n * m) - 1;
    int ans = 0;
    array<int, 8> x = {-2, -2, 2, 2, -1, 1, -1, 1};
    array<int, 8> y = {-1, 1, -1, 1, -2, -2, 2, 2};
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            int diff = 0;
            for(int k = 0; k < 8; k++) {
                int dx = i + x[k];
                int dy = j + y[k];
                if(dx >= 0 && dx < n && dy >= 0 && dy < m)
                    diff++;
            }
            ans += (total - diff);
        }
    return ans;
    }
};
