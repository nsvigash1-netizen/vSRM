#include <stdio.h>
int main() {
    int n;
    printf("Enter integer to find factorial: ");
    scanf("%d", &n);
    int factorial = 1;
    if (n < 0) {
        printf("Invalid Input");
    } else if (n == 0) {
        printf("Factorial is 1");
    } else {
        do {
            factorial*= n--;
        } while (n > 0);
        printf("factorial is %d", factorial);   
    }
    return 0;
}