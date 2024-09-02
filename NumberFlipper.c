#include <stdio.h>

void main() {
    int number, digit, reversed = 0;

    printf("Enter your number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    printf("The reverse is: %d", reversed);
}