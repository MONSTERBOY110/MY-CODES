#include <stdio.h>
#include <limits.h>
#include <string.h>

#define N 4
#define INF INT_MAX

int dist[N][N] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};

int dp[N][1 << N];
int visited;

int tsp(int pos, int mask) {
    // All cities visited
    if (mask == (1 << N) - 1)
        return dist[pos][0];
    
    // Already computed
    if (dp[pos][mask] != -1)
        return dp[pos][mask];
    
    int ans = INF;
    
    for (int city = 0; city < N; city++) {
        if ((mask & (1 << city)) == 0) {
            int newAns = dist[pos][city] + tsp(city, mask | (1 << city));
            ans = (ans < newAns) ? ans : newAns;
        }
    }
    
    return dp[pos][mask] = ans;
}

int main() {
    memset(dp, -1, sizeof(dp));
    
    int result = tsp(0, 1);
    
    printf("Minimum cost of TSP: %d\n", result);
    
    return 0;
}
