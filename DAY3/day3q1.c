#include <stdio.h>

int main() {
    int n, k, count = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        count++;
        if (arr[i] == k) {
            printf("Found at index %d\n", i);
            printf("Comparisons = %d\n", count);
            return 0;
        }
    }

    printf("Not Found\n");
    printf("Comparisons = %d\n", count);

    return 0;
}