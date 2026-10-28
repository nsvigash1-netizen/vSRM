// Problem Description:

// Given the length, width, and height of an object, a person wants to calculate the surface area of the object for stress relief purposes. The surface area is calculated using the formula: Surface Area = 2 x (width x length + length x height + height x width).
#include <stdio.h>
int main()
{
    int length, width, height, surfacearea; 
    scanf("%d %d %d", &length, &width, &height); 
    if (1 > length || length > 10 || 1 > width || width > 10 || 1 > height || height > 10) printf("Invalid input");
    else {
        surfacearea = 2 * (width * length + length * height + height * width);
        printf("%d", surfacearea); 
	    return 0;
    }
}