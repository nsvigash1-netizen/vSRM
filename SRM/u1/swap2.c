#include <stdio.h>
int main(void) {

// swapping without temp
    int a = 3, b = 7;
    a = a + b; // 3+7
    b = a - b; // 3+7-7
    a = a - b; //3+7-3
    printf("a = %d b = %d", a, b);
}