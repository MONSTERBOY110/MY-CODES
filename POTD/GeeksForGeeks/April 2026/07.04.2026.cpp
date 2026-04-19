class Solution {
  public:
    vector<int> stableMarriage(vector<vector<int>> &men, vector<vector<int>> &women) {
        // code here
        int n = men.size();
        vector<vector<int>> rank(n, vector<int>(n));
        for (int w = 0; w < n; w++)
            for (int pos = 0; pos < n; pos++)
                rank[w][women[w][pos]] = pos;
        vector<int> womanPartner(n, -1);
        vector<int> result(n, -1);
        vector<int> nextProposal(n, 0);
        queue<int> freeMen;
        for (int i = 0; i < n; i++)
            freeMen.push(i);
        while (!freeMen.empty()) {
            int man = freeMen.front();
            freeMen.pop();
            int woman = men[man][nextProposal[man]];
            nextProposal[man]++;
            if (womanPartner[woman] == -1){
                womanPartner[woman] = man;
                result[man] = woman;
            }
            else
            {
                int currentMan = womanPartner[woman];
                if (rank[woman][man] < rank[woman][currentMan]){
                    womanPartner[woman] = man;
                    result[man] = woman;
                    result[currentMan] = -1;
                    freeMen.push(currentMan);
                }
                else
                    freeMen.push(man);
            }
        }
        return result;
    }
};
