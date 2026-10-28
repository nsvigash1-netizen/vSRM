#include <stdio.h>
int main(void) {
    int num1, num2;
    char op;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter op (+ - * /): ");
    scanf(" %c", &op);

    // int choice = 0;
    // // !! operator is an invalid variable name
    // if (op == '+') {
    //     choice = 1;
    // } else if (op == '-') {
    //     choice = 2;
    // } else if (op == '*') {
    //     choice = 3;
    // } else if (op == '/') {
    //     choice = 4;
    // }

    switch(op) {
        case '+':
            printf("%d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d", num1*num2);
            break;
        case '/':
            printf("%d", num1 / num2);
            break;
        default:
            printf("invalid input");
    }
}