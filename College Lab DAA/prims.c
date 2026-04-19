#include <stdio.h>
#include <limits.h>

#define V 6

int min_key(int key[], int visited[]) {
    int min = INT_MAX;
    int min_index = -1;
    
    for (int i = 0; i < V; i++) {
        if (!visited[i] && key[i] < min) {
            min = key[i];
            min_index = i;
        }
    }
    
    return min_index;
}

void prims(int graph[V][V]) {
    int visited[V] = {0};
    int key[V];
    int parent[V];
    
    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
        parent[i] = -1;
    }
    
    key[0] = 0;
    
    for (int count = 0; count < V - 1; count++) {
        int u = min_key(key, visited);
        visited[u] = 1;
        
        for (int v = 0; v < V; v++) {
            if (graph[u][v] && !visited[v] && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
    
    printf("Minimum Spanning Tree (Prim's Algorithm):\n");
    printf("Edge\tWeight\n");
    int total_weight = 0;
    
    for (int i = 1; i < V; i++) {
        printf("%d-%d\t%d\n", parent[i], i, key[i]);
        total_weight += key[i];
    }
    
    printf("\nTotal weight: %d\n", total_weight);
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
    
    prims(graph);
    
    return 0;
}
