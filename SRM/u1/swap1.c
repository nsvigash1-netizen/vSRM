#include <stdio.h>
int main(void) {
    int a = 3, b = 7, temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d b = %d", a, b);
}