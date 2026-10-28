#include <stdio.h>
int main() {
    int num1, num2, num3; 
    int sum;
    scanf("%d %d %d", &num1, &num2, &num3);
    if (!(1 <= num1 && num1 <= 15 && 1 <= num2 && num2 <= 15 && 1 <= num3 && num3 <= 15)) {
        printf("Invalid Inputs");
    } else {
        sum = num1+num2+num3;
        printf("%d", sum);
    }
    return 0;
}