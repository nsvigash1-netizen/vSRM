//Problem Description:

// Ravi was booking train tickets from Chennai to Delhi for his family. Additionally, two relatives from different locations have expressed interest in joining the journey with their respective family members. Ravi has decided to book tickets for these relatives as well, along with his own family members.

// To determine the total number of tickets for this travel, Ravi needs to declare three integer variables: num1, num2, and num3. 

#include <stdio.h>
int main() {
    int num1,num2,num3;
    int sum; 
    scanf("%d %d %d", &num1, &num2, &num3);
    if (1 > num1 || num1 > 15
            || 1 > num2 || num2 > 15
                || 1 > num3 || num3 > 15) {
        printf("Invalid Inputs");
    } else {
        sum = num1 + num2 + num3;
        printf("%d", sum);
    }
    return 0;
}