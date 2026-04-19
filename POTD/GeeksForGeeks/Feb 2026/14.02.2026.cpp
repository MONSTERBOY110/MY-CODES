class Solution {
public:

    bool check(vector<int> &a, int n, int k, int mid)
    {
        int sum = 0;
        int cnt = 1;

        for(int i = 0; i < n; i++)
        {
            if(sum + a[i] <= mid)
            {
                sum = sum + a[i];
            }
            else
            {
                cnt++;
                sum = a[i];
            }
        }

        if(cnt <= k)
            return true;
        else
            return false;
    }

    int minTime(vector<int>& a, int k)
    {
        int n = a.size();

        int low = a[0];
        for(int i = 1; i < n; i++)
        {
            if(a[i] > low)
                low = a[i];
        }

        int high = 0;
        for(int i = 0; i < n; i++)
        {
            high = high + a[i];
        }

        int ans = -1;

        while(low <= high)
        {
            int mid = (low + high) / 2;

            if(check(a, n, k, mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};

