#include <stdio.h>

int binary_search(int arr[], int low, int high, int target) {
    if (low > high)
        return -1;
    
    int mid = (low + high) / 2;
    
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        return binary_search(arr, low, mid - 1, target);
    else
        return binary_search(arr, mid + 1, high, target);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = 10;
    int target = 12;
    
    int result = binary_search(arr, 0, n - 1, target);
    
    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index: %d\n", result);
    
    return 0;
}
