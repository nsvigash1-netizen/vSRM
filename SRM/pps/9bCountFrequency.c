#include <stdio.h>

// Create a function countFrequency(int arr(], int n)
// that uses a for loop to compute how many times each element appears in the array.
void countFrequency(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 1;
        // check if element is already counted
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                count = 0;
                break;
            }
        }
        if (count != 0) {
            for (int k = 0; k < n; k++) {
                if (arr[i] == arr[k]) {
                    count++;
                }
            }
            // 10 is field width
            printf("%-10d%-10d\n", arr[i], count);
        }
    }
}
int main() {
    printf("Element Frequency\n");
    int array[5] = {1,2,3,2,3};
    countFrequency(array, 5);
}