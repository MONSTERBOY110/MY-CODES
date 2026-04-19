#include <stdio.h>

void job_sequencing() {
    int id[] = {1, 2, 3, 4, 5};
    int deadline[] = {4, 1, 1, 1, 1};
    int profit[] = {20, 10, 40, 30, 5};
    int n = 5;
    
    // Sort by profit (bubble sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (profit[j] < profit[j + 1]) {
                // Swap all arrays
                int temp = profit[j];
                profit[j] = profit[j + 1];
                profit[j + 1] = temp;
                
                temp = deadline[j];
                deadline[j] = deadline[j + 1];
                deadline[j + 1] = temp;
                
                temp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp;
            }
        }
    }
    
    int max_deadline = 4;
    int slot[max_deadline];
    
    for (int i = 0; i < max_deadline; i++)
        slot[i] = -1;
    
    int total_profit = 0;
    
    for (int i = 0; i < n; i++) {
        int j = deadline[i] - 1;
        
        while (j >= 0 && slot[j] != -1)
            j--;
        
        if (j >= 0) {
            slot[j] = id[i];
            total_profit += profit[i];
        }
    }
    
    printf("Job Sequencing Solution:\n");
    printf("Slot\tJob\n");
    for (int i = 0; i < max_deadline; i++) {
        if (slot[i] != -1)
            printf("%d\tJ%d\n", i + 1, slot[i]);
    }
    
    printf("\nTotal profit: %d\n", total_profit);
}

int main() {
    job_sequencing();
    return 0;
}
