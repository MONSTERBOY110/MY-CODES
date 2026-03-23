class Solution {
  public:
    int longestCycle(int V, vector<vector<int>>& edges) {
        // code here
        vector<int> next(V, -1);
        for (auto& e : edges) next[e[0]] = e[1];
        vector<int> vis(V, -1);
        int ans = -1, time = 0;
        for (int i = 0; i < V; ++i) {
            if (vis[i] != -1) continue;
            int start = time,node = i;
            while (node != -1 && vis[node] == -1) {
                vis[node] = time++;
                node = next[node];
            }
            if (node != -1 && vis[node] >= start)
                ans = max(ans, time - vis[node]);
        }
        return ans;
    }
};
