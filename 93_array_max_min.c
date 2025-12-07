#include <stdio.h>

void findMinMax(int arr[], int n, int *minVal, int *maxVal) {
    if (n == 1) {
        *minVal = arr[0];
        *maxVal = arr[0];
        return;
    }

    findMinMax(arr, n - 1, minVal, maxVal);

    if (arr[n - 1] < *minVal) {
        *minVal = arr[n - 1];
    }
    if (arr[n - 1] > *maxVal) {
        *maxVal = arr[n - 1];
    }
}

int main() {
    int arr[] = {12, 5, 7, 25, 3, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minVal, maxVal;
    findMinMax(arr, n, &minVal, &maxVal);

    printf("Minimum element: %d\n", minVal);
    printf("Maximum element: %d\n", maxVal);

    return 0;
}