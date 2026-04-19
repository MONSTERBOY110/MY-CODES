#include <stdio.h>
#include <limits.h>

#define V 6
#define INF INT_MAX

int min_dist(int dist[], int visited[]) {
    int min = INF;
    int min_index = -1;
    
    for (int i = 0; i < V; i++) {
        if (!visited[i] && dist[i] < min) {
            min = dist[i];
            min_index = i;
        }
    }
    
    return min_index;
}

void dijkstra(int graph[V][V], int src) {
    int dist[V];
    int visited[V] = {0};
    
    for (int i = 0; i < V; i++)
        dist[i] = INF;
    
    dist[src] = 0;
    
    for (int count = 0; count < V - 1; count++) {
        int u = min_dist(dist, visited);
        
        if (u == -1)
            break;
        
        visited[u] = 1;
        
        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] && dist[u] != INF) {
                if (dist[u] + graph[u][v] < dist[v])
                    dist[v] = dist[u] + graph[u][v];
            }
        }
    }
    
    printf("Shortest paths from vertex %d:\n", src);
    for (int i = 0; i < V; i++) {
        printf("To vertex %d: %d\n", i, dist[i]);
    }
}

int main() {
    int graph[V][V] = {
        {0, 4, 2, 0, 0, 0},
        {4, 0, 1, 5, 0, 0},
        {2, 1, 0, 8, 10, 0},
        {0, 5, 8, 0, 2, 6},
        {0, 0, 10, 2, 0, 3},
        {0, 0, 0, 6, 3, 0}
    };
    
    dijkstra(graph, 0);
    
    return 0;
}
