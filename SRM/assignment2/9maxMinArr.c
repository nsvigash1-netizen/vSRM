#include <stdio.h>
#define MAXLEN 100
int main() {
    int arr[MAXLEN];
    int n = 0;
    int choice = 0;    
    do {
        printf("\n\nMENU\n1. Add elements to array\n");
        printf("2. Find Minimum\n3. Find Maximum\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice > 1 && choice < 4 && n == 0) 
            printf("Array is empty, enter elements");
        switch (choice) {
            case 1:
                printf("Enter no. of elements (1-%d): ", MAXLEN);
                scanf("%d", &n);
                if (n < 1 || n > MAXLEN) {
                    printf("Invalid array size.");
                } else {
                    for (int i = 0; i < n; i++) {
                        printf("Enter element %d: ", i+1);
                        scanf("%d", &arr[i]);
                    }
                    printf("\nArray is: [");
                    for (int j = 0; j < n; j++) {
                        printf("%d",arr[j]);
                        // print comma between array elements
                        // and ']' for last element
                        j == n - 1 ? printf("]") : printf(", ");
                    }
                }
                break;
            case 2:
                int min = arr[0];
                for (int i = 0; i < n; i++) {
                    if (arr[i] < min) 
                        min = arr[i];
                }      
                printf("\nMinimum Element is: %d", min);
                break;
            case 3:
                int max = arr[0];
                for (int i = 0; i < n; i++) {
                    if (arr[i] > max)
                        max = arr[i];
                }
                printf("\nMaximum Element is: %d", max);
                break;
            case 4:
                break;
            default:
                printf("Enter valid choice");
        }
    } while (choice != 4);
    return 0;
}
