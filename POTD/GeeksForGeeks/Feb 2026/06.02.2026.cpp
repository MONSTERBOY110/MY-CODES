class Solution {
  public:
    vector<int> smallestDiff(vector<int>& a, vector<int>& b, vector<int>& c) {
        // code here.
        vector<int> solution;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        int i = 0,j = 0, k = 0,currAns = INT_MAX,min_i = -1,min_j = -1,min_k = -1;
        while(i < a.size() && j < b.size() && k < c.size()){
            int newCurrAns = max(a[i], max(b[j], c[k])) - min(a[i], min(b[j], c[k]));
            if(newCurrAns < currAns){
                currAns = newCurrAns;
                min_i = i;
                min_j = j;
                min_k = k;
            }
            if(a[i] <= b[j] && a[i] <= c[k]){
                i++;
            }
            else if(b[j] <= a[i] && b[j] <= c[k]){
                j++;
            }
            else{
                k++;
            }
            
        }
        solution = {a[min_i], b[min_j], c[min_k]};
        sort(solution.rbegin(), solution.rend());
        return solution;
    }
};
