// Problem Description:

// In a technical interview at TechFusion  for computer science candidates, a problem involving basic arithmetic operations is presented. Candidates must perform addition, subtraction, multiplication, and division of two given numbers within a strict 5-minute deadline.


#include <stdio.h>
int main(){
    int testnum1, testnum2; 
    int sum, sub, mult, mod;  
    float div;
    //printf("Enter two numbers: ");
        // printf() is causing error in test-cases
    scanf("%d %d", &testnum1, &testnum2);
    if (!(1 <= testnum1 && testnum1 <= 50 && 1 <= testnum2 && testnum2 <= 50)) {
        printf("Invalid input");
        return 0;
    }
    sum = testnum1 + testnum2;
    sub = testnum1 - testnum2;
    mult = testnum1 * testnum2;
    mod = testnum1 % testnum2;
    div = (float)testnum1 /testnum2;
    printf("Addition: %d\nSubtraction: %d\nMultiplication: %d\nDivision: %.3f\nModulus: %d",
    sum, sub, mult, div, mod);
	return 0;
}