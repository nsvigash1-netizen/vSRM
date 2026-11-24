#include <stdio.h>
#include <string.h>
#define BUF_SIZE 1024
int main(void) {
    char filename[256];
    char buffer[BUF_SIZE];
    long lines = 0, chars = 0;
    int lastEndedWithNewline = 1; // Empty file gives 0 lines

    printf("Enter file name: ");
    if (scanf("%255s", filename) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Error opening file");
        return 1;
    }

    while (fgets(buffer, sizeof buffer, fp) != NULL) {
        size_t len = strlen(buffer);
        chars += len;                       
        if (buffer[len - 1] == '\n') {
            // a full line has been read
            lines++;
            lastEndedWithNewline = 1;
        } else {                            
            // long line chunk, or last line without '\n'
            lastEndedWithNewline = 0;
        }
    }

    if (ferror(fp)) {
        perror("Error reading file");
        fclose(fp);
        return 1;
    }

    if (!lastEndedWithNewline)    lines++;
    fclose(fp);

    printf("Lines      : %ld\n", lines);
    printf("Characters : %ld\n", chars);
    return 0;
}
