#include <stdio.h>

void main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number) {
    case 1:
        printf("Today is sunday");
    break;

    case 2:
        printf("Today is monday");
    break;

    case 3:
        printf("Today is tuesday");
    break;

    case 4:
        printf("Today is wednesday");
    break;

    case 5:
        printf("Today is thrusday");
    break;

    case 6:
        printf("Today is friday");
    break;

    case 7:
        printf("Today is saturday");
    break;

    default:
        printf("Number must be between 1 - 7");
    break;
    }
}