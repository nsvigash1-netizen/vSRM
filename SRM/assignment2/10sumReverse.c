#include <stdio.h>
int main() {
    int numInitialised = 0;
    int num = 0;
    int choice = 0;    
    do {
        printf("\n\nMENU\n1. Enter Number\n2. Sum of Individual digits\n");
        printf("3. Reverse Integer\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice > 1 && choice < 4 && numInitialised == 0)
            printf("Enter a number before proceeding"); 
        switch (choice) {
            case 1:
                printf("Enter positive integer: ");
                scanf("%d", &num);
                numInitialised++;
                break;
            case 2:
                int tempNum = num;
                int sum = 0;
                while (tempNum > 0) {
                    sum += tempNum % 10;
                    tempNum /= 10;
                }
                printf("Sum is: %d", sum);
                break;
            case 3:
                int tempNum2 = num;
                int reverse = 0;
                int i = 0; // iteration
                while (tempNum2 > 0) {
                    reverse *= 10;
                    reverse += (tempNum2 % 10);
                    tempNum2 /= 10;
                }
                printf("Reverse Number is: %d", reverse);                
                break;
            case 4:
                break;
            default:
                printf("Enter valid choice");
        }
    } while (choice != 4);
    return 0;
}
