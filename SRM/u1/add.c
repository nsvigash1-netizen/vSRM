#include <stdio.h>

//Add 2 nums

int main(void) {
    int a;
    int b;
    printf("Enter 2 numbers (seperated by a space) to add: ");
    scanf("%d %d", &a, &b);
    printf("The Sum of %d and %d is %d", a, b, a + b);

}