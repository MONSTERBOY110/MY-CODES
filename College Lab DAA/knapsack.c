#include <stdio.h>

void knapsack() {
    float weight[] = {10, 20, 30};
    float profit[] = {60, 100, 120};
    int n = 3;
    float capacity = 50;
    
    // Calculate ratios
    float ratio[n];
    for (int i = 0; i < n; i++)
        ratio[i] = profit[i] / weight[i];
    
    // Sort by ratio (bubble sort for simplicity)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ratio[j] < ratio[j + 1]) {
                // Swap ratios
                float temp = ratio[j];
                ratio[j] = ratio[j + 1];
                ratio[j + 1] = temp;
                
                // Swap weights
                temp = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = temp;
                
                // Swap profits
                temp = profit[j];
                profit[j] = profit[j + 1];
                profit[j + 1] = temp;
            }
        }
    }
    
    float total_profit = 0;
    float total_weight = 0;
    
    printf("Knapsack (Capacity: %.2f):\n", capacity);
    printf("Weight\tProfit\tRatio\n");
    
    for (int i = 0; i < n; i++) {
        printf("%.2f\t%.2f\t%.2f\n", weight[i], profit[i], ratio[i]);
        
        if (total_weight + weight[i] <= capacity) {
            total_weight += weight[i];
            total_profit += profit[i];
            printf("  -> Added to knapsack\n");
        } else {
            float remaining = capacity - total_weight;
            if (remaining > 0) {
                float fraction = remaining / weight[i];
                total_profit += fraction * profit[i];
                printf("  -> Added %.2f fraction to knapsack\n", fraction);
                break;
            }
        }
    }
    
    printf("\nTotal weight: %.2f\n", total_weight);
    printf("Total profit: %.2f\n", total_profit);
}

int main() {
    knapsack();
    return 0;
}
