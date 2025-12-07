#include <stdio.h>

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return -1;
    }

    int first = arr[0], second = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < first && (second == -1 || arr[i] > second)) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int arr[] = {12, 5, 7, 25, 3, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, n);

    if (secondLargest != -1) {
        printf("Second largest element: %d\n", secondLargest);
    }

    return 0;
}