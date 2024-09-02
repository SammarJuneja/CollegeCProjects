#include <stdio.h>

void main() {
    int number, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Enter a positive number\n");
    } else {
        for (int i = 1; i <= number; i++) {
            fact *= i;
        }
        printf("Factorial of %d is: %d", number, fact);
    }
}