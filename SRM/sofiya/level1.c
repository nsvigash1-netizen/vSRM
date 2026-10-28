#include <stdio.h>
int main (void) {
    int roll;
    float fee;
    char pay;
    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter fee amount: ");
    scanf("%f", &fee);
    printf("Enter payment mode (C/O): ");
    scanf(" %c", &pay);
    printf("\nReceipt: Roll %d | Rs. %.2f | Mode: %c", roll, fee, pay);
}