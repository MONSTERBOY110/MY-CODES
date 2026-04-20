#include <stdio.h>

int main() {
    int val[20], wt[20];
    int n, cap;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d %d", &val[i], &wt[i]);

    scanf("%d", &cap);

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if((float)val[i]/wt[i] < (float)val[j]/wt[j]) {
                int t = val[i]; val[i] = val[j]; val[j] = t;
                t = wt[i]; wt[i] = wt[j]; wt[j] = t;
            }
        }
    }

    float total = 0;

    for(int i = 0; i < n; i++) {
        if(wt[i] <= cap) {
            total += val[i];
            cap -= wt[i];
        } else {
            total += (float)val[i]/wt[i] * cap;
            break;
        }
    }

    printf("%.2f", total);
    return 0;
}
