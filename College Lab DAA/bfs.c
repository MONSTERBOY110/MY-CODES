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

void bfs(int start) {
    int visited[V] = {0};
    int queue[V];
    int front = 0, rear = 0;
    
    visited[start] = 1;
    queue[rear++] = start;
    
    printf("BFS Traversal: ");
    
    while (front < rear) {
        int vertex = queue[front++];
        printf("%d ", vertex);
        
        for (int i = 0; i < V; i++) {
            if (graph[vertex][i] && !visited[i]) {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
    
    printf("\n");
}

int main() {
    bfs(0);
    
    return 0;
}
