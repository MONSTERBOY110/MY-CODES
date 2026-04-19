#include <stdio.h>

int global_max, global_min;

void find_max_min(int arr[], int low, int high) {
    int local_max, local_min;
    
    // Base case: single element
    if (low == high) {
        local_max = arr[low];
        local_min = arr[low];
    }
    // Base case: two elements
    else if (high == low + 1) {
        if (arr[low] > arr[high]) {
            local_max = arr[low];
            local_min = arr[high];
        } else {
            local_max = arr[high];
            local_min = arr[low];
        }
    }
    // Divide and conquer
    else {
        int mid = (low + high) / 2;
        find_max_min(arr, low, mid);
        int left_max = global_max, left_min = global_min;
        find_max_min(arr, mid + 1, high);
        int right_max = global_max, right_min = global_min;
        
        local_max = (left_max > right_max) ? left_max : right_max;
        local_min = (left_min < right_min) ? left_min : right_min;
    }
    
    global_max = local_max;
    global_min = local_min;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 88};
    int n = 8;
    
    find_max_min(arr, 0, n - 1);
    
    printf("Maximum element: %d\n", global_max);
    printf("Minimum element: %d\n", global_min);
    
    return 0;
}
