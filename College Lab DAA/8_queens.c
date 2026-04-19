#include <stdio.h>

#define N 8

int board[N][N];
int solutions = 0;

int is_safe(int row, int col) {
    // Check left side of row
    for (int j = 0; j < col; j++) {
        if (board[row][j])
            return 0;
    }
    
    // Check upper left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j])
            return 0;
    }
    
    // Check lower left diagonal
    for (int i = row, j = col; i < N && j >= 0; i++, j--) {
        if (board[i][j])
            return 0;
    }
    
    return 1;
}

void solve(int col) {
    if (col >= N) {
        solutions++;
        printf("\nSolution %d:\n", solutions);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d ", board[i][j]);
            }
            printf("\n");
        }
        return;
    }
    
    for (int row = 0; row < N; row++) {
        if (is_safe(row, col)) {
            board[row][col] = 1;
            solve(col + 1);
            board[row][col] = 0;
        }
    }
}

int main() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            board[i][j] = 0;
    
    solve(0);
    
    printf("\nTotal solutions: %d\n", solutions);
    
    return 0;
}
