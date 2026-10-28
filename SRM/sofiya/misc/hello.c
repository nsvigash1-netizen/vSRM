#include <stdio.h>
//prototype
void printSection();

int main() {
    int roll = 17;
    printf("My Roll Number is: %d\n", roll);
    printSection();
    return 0;
}

void printSection() {
    printf("Enter your section: ");
    char section;
    scanf(" %c", &section);
    printf("My section is: %c", section);
}