#include <stdio.h>

#define V 4

int graph[V][V] = {
    {0, 1, 1, 1},
    {1, 0, 1, 0},
    {1, 1, 0, 1},
    {1, 0, 1, 0}
};

int color[V];

int is_safe(int vertex, int c) {
    for (int i = 0; i < V; i++) {
        if (graph[vertex][i] && color[i] == c)
            return 0;
    }
    return 1;
}

void print_solution() {
    printf("Coloring: ");
    for (int i = 0; i < V; i++)
        printf("V%d-Color%d ", i, color[i]);
    printf("\n");
}

int color_graph(int vertex, int num_colors) {
    if (vertex == V)
        return 1;
    
    for (int c = 1; c <= num_colors; c++) {
        if (is_safe(vertex, c)) {
            color[vertex] = c;
            
            if (color_graph(vertex + 1, num_colors))
                return 1;
            
            color[vertex] = 0;
        }
    }
    
    return 0;
}

int main() {
    for (int i = 0; i < V; i++)
        color[i] = 0;
    
    int num_colors = 3;
    
    if (color_graph(0, num_colors)) {
        printf("Graph coloring with %d colors possible:\n", num_colors);
        print_solution();
    } else {
        printf("Graph coloring with %d colors not possible\n", num_colors);
    }
    
    return 0;
}
