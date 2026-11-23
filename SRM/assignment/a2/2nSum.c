#include <stdio.h>
int main() {
    int n;
    printf("Enter positive integer to find sum of first n natural numbers: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Invalid input");
    } else {
        int sum = 0;
        while (n > 0) {
            sum+= n--;
        }
        printf("sum is %d", sum);
    }
    return 0;
}