#include <stdio.h>

void countEvenOdd(int arr[], int n, int *evenCount, int *oddCount) {
    *evenCount = 0;
    *oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            (*evenCount)++;
        } else {
            (*oddCount)++;
        }
    }
}

int main() {
    int arr[] = {12, 5, 7, 25, 3, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    int evenCount, oddCount;
    countEvenOdd(arr, n, &evenCount, &oddCount);

    printf("Total even elements: %d\n", evenCount);
    printf("Total odd elements: %d\n", oddCount);

    return 0;
}