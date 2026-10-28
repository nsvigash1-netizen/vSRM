#include <stdio.h>
int main(void){
    int eid;
    float result;
    char name[20];

    printf("Enter ID: ");
    scanf("%d", &eid);
    printf("Enter name: ");
    scanf("%s", &name); // scanf("%19[^\n]", name) - reads upto 19 chars for multi-word names
    printf("Enter result: ");
    scanf("%f", &result);

    printf("\nEmployer ID is: %d\n", eid);
    printf("Name is: %s\nResult is: %.2f", name, result);
}