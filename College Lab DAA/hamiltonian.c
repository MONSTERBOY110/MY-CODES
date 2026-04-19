#include <stdio.h>

#define V 5

int graph[V][V] = {
    {0, 1, 0, 1, 0},
    {1, 0, 1, 1, 1},
    {0, 1, 0, 0, 1},
    {1, 1, 0, 0, 1},
    {0, 1, 1, 1, 0}
};

int path[V];
int visited[V] = {0};

int is_safe(int v, int pos) {
    // Check if adjacent
    if (!graph[path[pos - 1]][v])
        return 0;
    
    // Check if already visited
    for (int i = 0; i < pos; i++) {
        if (path[i] == v)
            return 0;
    }
    
    return 1;
}

void print_solution(int pos) {
    printf("Hamiltonian path: ");
    for (int i = 0; i < pos; i++)
        printf("%d ", path[i]);
    printf("\n");
}

int hamiltonian(int pos) {
    if (pos == V) {
        // Check if it forms a cycle (last to first)
        if (graph[path[pos - 1]][path[0]]) {
            print_solution(pos);
            return 1;
        }
        return 0;
    }
    
    for (int v = 1; v < V; v++) {
        if (is_safe(v, pos)) {
            path[pos] = v;
            
            if (hamiltonian(pos + 1))
                return 1;
            
            path[pos] = -1;
        }
    }
    
    return 0;
}

int main() {
    for (int i = 0; i < V; i++)
        path[i] = -1;
    
    path[0] = 0;
    
    if (!hamiltonian(1)) {
        printf("No Hamiltonian cycle exists\n");
    }
    
    return 0;
}
