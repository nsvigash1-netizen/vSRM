#include <stdio.h>
int main() {
    int kavi;
    kavi = 4;
    printf("Number is: %d\n", kavi);

    printf("Enter a new number: ");
    scanf("%d", &kavi);

    printf("New number is: %d", kavi);
    return 0;
}