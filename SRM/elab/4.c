// Problem Description:

//  A customer bought apples from a fruit shop and received a bill from the shopkeeper. The customer then provided an amount to the shopkeeper for paying the bill. They are interested in knowing the quotient and remainder after dividing the amount they provided by the bill amount specified by the shopkeeper.

#include <stdio.h>
int main()
{
    int billamt, amtgiven; 
    scanf("%d %d", &amtgiven, &billamt);
   // if (5 > billamt || billamt > 2500 || 5 > amtgiven || amtgiven > 2500) {
     //   printf("Invalid input");
    //} else
    if (billamt == 0) {
        printf("Error: Division by zero.");
    } else {
        printf("Quotient: %d\nRemainder: %d", amtgiven / billamt, amtgiven % billamt);
    }
	return 0;
}