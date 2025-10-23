#include <stdio.h>
int main() {
    char str[100];
    printf("Enter non-alphabetic characters: ");
    scanf("%[^A-Za-z]", str);
    printf("You entered: %s", str);
    return 0;
}