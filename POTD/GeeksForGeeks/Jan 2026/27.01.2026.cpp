class Solution {
  public:
    int n, m, k;
    int dr[4]={-1, 0, 1, 0};
    int dc[4]={0, 1, 0, -1};
    bool dfs(int r, int c, int x, string &word, 
    vector<vector<char>>&mat, vector<vector<bool>>&vis){
        if(x>=k) return true;
        for(int i=0; i<4; i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] &&
            mat[nr][nc]==word[x]){
                vis[nr][nc]=1;
                if(dfs(nr, nc, x+1, word, mat, vis)) return true;
                vis[nr][nc]=0;
            }
        }
        return false;
    }
    bool isWordExist(vector<vector<char>> &mat, string &word) {
        // Code here
        n=mat.size();
        m=mat[0].size();
        k=word.length();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==word[0]){
                    vector<vector<bool>>vis(n, vector<bool>(m, 0));
                    vis[i][j]=1;
                    if(dfs(i, j, 1, word, mat, vis)) return true;
                }
            }
        }
        return false;
    }
};
