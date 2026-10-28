#include <stdio.h>
#include <math.h>

int main() {
    int n = 0, sum = 0, ognum, num;
    int array[10];
    printf("Enter number: ");
    scanf("%d", &ognum);
    num = ognum;
    do {
        array[n++] = num % 10;
        num /= 10;
    } while (num > 0);

    for (int i = 0; i < n; i++) {
        sum+= (int)round(pow(array[i],n));
    }

    if (sum == ognum) {
        printf("%d is an Armstrong Number", ognum);
    } else {
        printf("%d is NOT an Armstrong Number", ognum);
    }
    return 0;
}