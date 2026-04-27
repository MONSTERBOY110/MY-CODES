#include <stdio.h>
#define MAX 20
int parent[MAX];
int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}
void kruskals(int n, int graph[MAX][MAX]) {
    int total = 0, count = 0;
    for (int i = 0; i < n; i++)
        parent[i] = i;
    printf("Minimum Spanning Tree:\n");
    printf("Edge\tWeight\n");
    while (count < n - 1) {
        int min = 999, u = -1, v = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (graph[i][j] != 0 && graph[i][j] < min) {
                    min = graph[i][j];
                    u = i;
                    v = j;
                }
            }
        }
        int a = find(u);
        int b = find(v);
        if (a != b) {
            printf("%d - %d\t%d\n", u, v, min);
            total += min;
            parent[a] = b;
            count++;
        }
        graph[u][v] = graph[v][u] = 0;
    }
    printf("\nTotal weight: %d\n", total);
}
int main() {
    int n, graph[MAX][MAX];
    printf("Enter No of Vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);
    kruskals(n, graph);
    return 0;
}                
