#include <stdio.h>
int main() {
    int arr[10], searchnum, i, count = 0;

    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &searchnum);

    for (i = 0; i < 10; i++) {
        if (arr[i] == searchnum)
            count++;
    }

    if (count > 0)
        printf("%d repeat %d times\n", searchnum, count);
    else
        printf("Invalid Number\n");

    return 0;
}

