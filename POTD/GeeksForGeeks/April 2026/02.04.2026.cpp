class Solution {
  public:
    int countWays(int n, int k) {
        // code here
        if (n == 1) return k;
        long long same = k;
        long long diff = 1LL * k * (k - 1);
        for (int i = 3; i <= n; i++) {
            long long newSame = diff;
            long long newDiff = (same + diff) * (k - 1);
            same = newSame;
            diff = newDiff;
        }
        return same + diff;
    }
};
