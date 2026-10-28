#include <stdio.h>
int main(void) {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    // if (num == 0) {
    //     printf("even");
    // } else if (num % 2 == 0) {
    //     printf("even");
    // } else {
    //     printf("odd");
    // }
    num % 2 == 0 ? printf("even") : printf("odd");
}