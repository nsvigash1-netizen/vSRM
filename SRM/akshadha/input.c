#include <stdio.h>
int main() {
    char s[20];
    // NOTE: If you enter more than one word here as input, You will get error.
    printf("Enter string for normal scanf: ");
    scanf("%s", s);
    printf("%s\n", &s);

    char t[20];
    printf("Enter string for scanf designed to handle newline character: ");
    scanf(" %[^\n]", t);
    printf("%s\n", &t);
}