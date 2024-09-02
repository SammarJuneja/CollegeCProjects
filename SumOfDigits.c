#include <stdio.h>

void main() {
    int number, digit, sum = 0;
    clrscr();

    printf("Enter your number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("The sum is: %d", sum);
}