#include <stdio.h>
#include <stdlib.h>

int is_goal(int tiles[]) {
    for (int i = 0; i < 15; i++) {
        if (tiles[i] != i + 1)
            return 0;
    }
    return tiles[15] == 0;
}

int heuristic(int tiles[]) {
    // Manhattan distance
    int h = 0;
    for (int i = 0; i < 16; i++) {
        if (tiles[i] != 0) {
            int target = tiles[i] - 1;
            int current_row = i / 4, current_col = i % 4;
            int target_row = target / 4, target_col = target % 4;
            h += abs(current_row - target_row) + abs(current_col - target_col);
        }
    }
    return h;
}

void print_tiles(int tiles[]) {
    for (int i = 0; i < 16; i++) {
        printf("%2d ", tiles[i]);
        if ((i + 1) % 4 == 0)
            printf("\n");
    }
}

int main() {
    int initial[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0, 15};
    
    printf("Initial state:\n");
    print_tiles(initial);
    
    printf("\nHeuristic value (Manhattan distance): %d\n", heuristic(initial));
    
    if (is_goal(initial)) {
        printf("Already at goal state!\n");
    }
    
    return 0;
}
