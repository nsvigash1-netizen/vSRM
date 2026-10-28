#include <stdio.h>
int main (){
    // a, b , c are variables
    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    int sum;
    sum=a+b+c;
    printf("the sum is: %d", sum);
    return 0;
}