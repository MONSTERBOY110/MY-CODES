#include <stdio.h>

#define MAX_V 6
#define MAX_E 9

int parent[MAX_V];
int rank_arr[MAX_V];

int find(int i) {
    if (parent[i] != i)
        parent[i] = find(parent[i]);
    return parent[i];
}

void unionSet(int x, int y) {
    int xroot = find(x);
    int yroot = find(y);
    
    if (rank_arr[xroot] < rank_arr[yroot])
        parent[xroot] = yroot;
    else if (rank_arr[xroot] > rank_arr[yroot])
        parent[yroot] = xroot;
    else {
        parent[yroot] = xroot;
        rank_arr[xroot]++;
    }
}

void kruskals(int u[], int v[], int weight[], int num_edges, int num_vertices) {
    // Sort edges by weight (bubble sort)
    for (int i = 0; i < num_edges - 1; i++) {
        for (int j = 0; j < num_edges - i - 1; j++) {
            if (weight[j] > weight[j + 1]) {
                // Swap weights
                int temp = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = temp;
                
                // Swap u vertices
                temp = u[j];
                u[j] = u[j + 1];
                u[j + 1] = temp;
                
                // Swap v vertices
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < num_vertices; i++) {
        parent[i] = i;
        rank_arr[i] = 0;
    }
    
    printf("Minimum Spanning Tree (Kruskal's Algorithm):\n");
    printf("Edge\tWeight\n");
    
    int e = 0;
    int total_weight = 0;
    
    for (int i = 0; e < num_vertices - 1 && i < num_edges; i++) {
        int x = find(u[i]);
        int y = find(v[i]);
        
        if (x != y) {
            printf("%d-%d\t%d\n", u[i], v[i], weight[i]);
            total_weight += weight[i];
            unionSet(x, y);
            e++;
        }
    }
    
    printf("\nTotal weight: %d\n", total_weight);
}

int main() {
    int u[] = {0, 0, 1, 1, 2, 2, 3, 3, 4};
    int v[] = {1, 2, 2, 3, 3, 4, 4, 5, 5};
    int weight[] = {4, 2, 1, 5, 8, 10, 2, 6, 3};
    
    kruskals(u, v, weight, MAX_E, MAX_V);
    
    return 0;
}
