#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    char name[10];
    int marks;
}s3 = {3, "sam", 98};
int main() {
    struct student s1 = {1, "raju", 77};
    struct student s2;
    s2.roll = 55;
    strcpy(s2.name, "ram");
    printf("%d\n%s", s2.roll, s2.name);
    return 0;
}