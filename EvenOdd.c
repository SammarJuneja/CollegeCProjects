#include <stdio.h>

void main() {
   int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is an even number", number);
    }
}