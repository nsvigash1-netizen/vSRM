#include <stdio.h>
int main(void) {
    int arr[1000], n = 0;
    char filename[100];

    printf("Enter file name: ");
    scanf("%99s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }
    while (n < 1000 && fscanf(fp, "%d", &arr[n]) == 1)
        n++;
    fclose(fp);

    printf("\nNumber  Frequency\n");
    for (int i = 0; i < n; i++) {
        int seen = 0;
        for (int j = 0; j < i; j++)         /* already counted this value? */
            if (arr[j] == arr[i])
                seen = 1;
        if (seen)   continue;
        int count = 0;
        for (int j = 0; j < n; j++)
            if (arr[j] == arr[i])
                count++;
        printf("%-7d %d\n", arr[i], count);
    }
    return 0;
}
