#include <stdio.h>

void main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number) {
        case 1:
            printf("The day is sunday");
            break;

        case 2:
            printf("The day is monday");
            break;

        case 3:
            printf("The day is tuesday");
            break;

        case 4:
            printf("The day is wednesday");
            break;

        case 5:
            printf("The day is thrusday");
            break;

        case 6:
            printf("The day is friday");
            break;

        case 7:
            printf("The day is saturday");
            break;

        default:
            printf("Number must be between 1 - 7");
            break;
    }
}