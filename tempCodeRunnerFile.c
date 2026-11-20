#include <stdio.h>

// Create a function countFrequency(int arr(], int n)
// that uses a for loop to compute how many times each element appears in the array.
void countFrequency(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        printf("%d - %d", arr[i], count);
    }
}
int main() {
    printf("Element - Frequency");
    int array[5] = {1,2,3,2,3};
    countFrequency(array, 5);
}