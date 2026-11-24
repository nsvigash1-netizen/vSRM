#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter integers count n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid n\n");
        return 1;
    }
    int *arr = malloc(n * sizeof(int));
    if (!arr) {
        printf("malloc failed");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    printf("\nArray elements: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
        sum += arr[j];
    }
    free(arr);
    printf("\nSum is: %d\nAverage is: %f", sum, (float)sum/n);
    return 0;
}
