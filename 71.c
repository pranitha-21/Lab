#include <stdio.h>

int main() {
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (mid < high && arr[mid] > arr[mid + 1]) {
            printf("Pivot element is %d\n", arr[mid]);
            return 0;
        }

        if (mid > low && arr[mid] < arr[mid - 1]) {
            printf("Pivot element is %d\n", arr[mid - 1]);
            return 0;
        }

        if (arr[low] >= arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("No pivot element found\n");
    return 0;
}



