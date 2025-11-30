#include <stdio.h>

void readArray(int arr[], int n, int index) {
    if (index == n) {
        return;
    }
    scanf("%d", &arr[index]);
    readArray(arr, n, index + 1);
}

void printArray(int arr[], int n, int index) {
    if (index == n) {
        return;
    }
    printf("%d ", arr[index]);
    printArray(arr, n, index + 1);
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    readArray(arr, n, 0);

    printf("Array elements are:\n");
    printArray(arr, n, 0);

    return 0;
}