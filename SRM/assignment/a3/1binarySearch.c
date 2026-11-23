#include <stdio.h>
int iteration(const int* arr, int n, int target) {
    int iCount = 0;
    int start = 0, end = n - 1;
    while(start <= end) {
        iCount++;
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            printf("Iteration: Target found at index %d\n", mid);
            return iCount;
        }
        if (arr[mid] < target) start = mid + 1;
        else                   end = mid - 1;
    }
    return -1;
}
int recursion(const int* arr, int target, int start, int end, int rCount) {
    rCount++;
    if (start > end) return -1; // base case: not found
    int mid = start + (end - start) / 2;
    if (arr[mid] == target){
        printf("Recursion: Target found at index %d\n", mid);
        return rCount;
    }
    if (arr[mid] < target) return recursion(arr, target, mid + 1, end, rCount);
    return recursion(arr, target, start, mid - 1, rCount);
}
int main() {
    int n = 7;
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int target = 9;

    printf("Array elements: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\nTarget is: %d\n", target);

    int i = iteration(arr, n, target);
    int r = recursion(arr, target, 0, n-1, 0);
    
    if (i != -1) printf("No. of loop iterations: %d\n", i);
    else         printf("Target Not found using iteration\n");
    if (r != -1) printf("No. of recursive calls: %d", r);
    else         printf("Target Not found using recursion");
}