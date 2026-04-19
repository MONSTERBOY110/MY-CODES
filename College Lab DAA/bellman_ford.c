#include <stdio.h>
#include <limits.h>

#define V 5
#define E 8
#define INF INT_MAX

void bellman_ford(int u[], int v[], int weight[], int E, int V, int src) {
    int dist[V];
    
    for (int i = 0; i < V; i++)
        dist[i] = INF;
    
    dist[src] = 0;
    
    // Relax all edges V-1 times
    for (int i = 0; i < V - 1; i++) {
        for (int j = 0; j < E; j++) {
            if (dist[u[j]] != INF && dist[u[j]] + weight[j] < dist[v[j]]) {
                dist[v[j]] = dist[u[j]] + weight[j];
            }
        }
    }
    
    // Check for negative cycles
    for (int j = 0; j < E; j++) {
        if (dist[u[j]] != INF && dist[u[j]] + weight[j] < dist[v[j]]) {
            printf("Graph contains negative cycle\n");
            return;
        }
    }
    
    printf("Shortest paths from vertex %d:\n", src);
    for (int i = 0; i < V; i++) {
        printf("To vertex %d: %d\n", i, dist[i]);
    }
}

int main() {
    int u[] = {0, 0, 1, 1, 1, 3, 3, 4};
    int v[] = {1, 2, 2, 3, 4, 2, 1, 3};
    int weight[] = {-1, 4, 3, 2, 2, 5, 1, -3};
    
    bellman_ford(u, v, weight, E, V, 0);
    
    return 0;
}
