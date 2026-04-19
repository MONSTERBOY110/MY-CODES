#include <stdio.h>
#include <limits.h>

int matrix_chain(int p[], int n) {
    // m[i][j] = minimum multiplications for matrices from i to j
    int m[n][n];
    
    // l is the chain length
    for (int l = 2; l < n; l++) {
        for (int i = 1; i < n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            
            for (int k = i; k < j; k++) {
                // Cost of multiplying matrices i..k and k+1..j
                // plus cost of multiplying the result
                int cost = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                
                if (cost < m[i][j])
                    m[i][j] = cost;
            }
        }
    }
    
    return m[1][n - 1];
}

int main() {
    // Matrices: A1(10x30), A2(30x5), A3(5x60)
    // p[] = {10, 30, 5, 60}
    int p[] = {10, 30, 5, 60};
    int n = 4;
    
    int result = matrix_chain(p, n);
    
    printf("Minimum number of scalar multiplications: %d\n", result);
    
    return 0;
}
