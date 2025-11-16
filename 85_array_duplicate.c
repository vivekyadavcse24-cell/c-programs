#include <stdio.h>

int removeDuplicates(int a[], int n) {
    int i, j, k = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++)
            if (a[i] == a[j]) break;
        if (j == k) a[k++] = a[i];
    }
    return k;
}

int main() {
    int a[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    n=removeDuplicates(a,n);
    printf("array afte removing duplicate:\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}