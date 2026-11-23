#include <stdio.h>
int main() {
    printf("Input n for fibonacci series: ");
    int n_terms;
    scanf("%d", &n_terms);
    int n1 = 0;
    int n2 = 1;
    int n3 = 0;

    for (int i = 0; i < n_terms; i++) {
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }

    return 0;
}