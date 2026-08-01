#include <stdio.h>
#define MAX 20
void jobseq(int n,int id[MAX],int deadline[MAX],int profit[MAX]) {
    int total=0,int i,j;
    for (i=0;i<n-1;i++) {
        for (j=0;j<n-i-1;j++) {
            if (profit[j]profit[j + 1]) {
                int temp;

                temp = profit[j];
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

    int max_deadline = 0;
    for (i = 0; i < n; i++) {
        if (deadline[i] > max_deadline)
            max_deadline = deadline[i];
    }

    int slot[MAX];

    for (i = 0; i < max_deadline; i++)
        slot[i] = -1;

    for (i = 0; i < n; i++) {
        int j = deadline[i] - 1;

        while (j >= 0 && slot[j] != -1)
            j--;

        if (j >= 0) {
            slot[j] = id[i];
            total += profit[i];
        }
    }

    printf("Job Sequencing Solution:\n");
    printf("Slot\tJob\n");

    for (i = 0; i < max_deadline; i++) {
        if (slot[i] != -1)
            printf("%d\tJ%d\n", i + 1, slot[i]);
    }

    printf("\nTotal profit: %d\n", total);
}

int main() {
    int n, id[MAX], deadline[MAX], profit[MAX],i;
    printf("Enter No of Jobs: ");
    scanf("%d", &n);

    printf("Enter Job ID, Deadline and Profit:\n");
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &id[i], &deadline[i], &profit[i]);
    }

    job_sequencing(n, id, deadline, profit);

    return 0;
}
