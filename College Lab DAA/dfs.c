#include <stdio.h>

#define V 6

int graph[V][V] = {
    {0, 1, 1, 0, 0, 0},
    {1, 0, 1, 1, 0, 0},
    {1, 1, 0, 1, 0, 0},
    {0, 1, 1, 0, 1, 0},
    {0, 0, 0, 1, 0, 1},
    {0, 0, 0, 0, 1, 0}
};

int visited[V];

void dfs_helper(int vertex) {
    visited[vertex] = 1;
    printf("%d ", vertex);
    
    for (int i = 0; i < V; i++) {
        if (graph[vertex][i] && !visited[i]) {
            dfs_helper(i);
        }
    }
}

void dfs(int start) {
    for (int i = 0; i < V; i++)
        visited[i] = 0;
    
    printf("DFS Traversal: ");
    dfs_helper(start);
    printf("\n");
}

int main() {
    dfs(0);
    
    return 0;
}
