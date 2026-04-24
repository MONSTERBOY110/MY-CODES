#include <stdio.h>
#define MAX 20
void prims(int n,int graph[MAX][MAX]) {
    int visited[MAX]={0},total=0,count = 0;
    visited[0] = 1;
    printf("Minimum Spanning Tree:\n");
    printf("Edge\tWeight\n");
    while (count<n-1) {
        int min=999,u=-1,vertex=-1;
        for (int i=0;i<n;i++)
            for (int j=0;j<n;j++)
                if (visited[i] && !visited[j] && graph[i][j]!=0 && graph[i][j]<min){
                    min=graph[i][j];
                    u=i;
                    vertex=j;
                }
        if (u!=-1){
            visited[vertex]=1;
            printf("%d - %d\t%d\n",u,vertex,min);
            total+=min;
            count++;
        }
    }
    printf("\nTotal weight: %d\n",total);
}

int main() {
    int n,graph[MAX][MAX];
    printf("Enter No of Vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix (%d x %d):\n", n, n);
    for (int i=0;i<n;i++) 
        for (int j=0;j<n;j++) 
            scanf("%d", &graph[i][j]);
    prims(n, graph);
    return 0;
}