#include <math.h>
#include<stdio.h>

int main(){
    int radius;
    double pi = 3.1415;
//#define PI 3.1415
    printf("enter the radius: ");
    scanf("%d",&radius);
    int circumference;
    int area;
    circumference = 2*pi*radius;
    // area = pi*radius*radius;
    area = pi*pow(radius,2);
    
    printf("the cirumference of the circle is :%d \n",circumference);
    printf("the are of the circle is :%d\n", area);

    int root;
    root = pow(radius,0.5);
    printf("root of %d is: %d", radius, root);
    return 0;

}