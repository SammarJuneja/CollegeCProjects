#include <stdio.h>

void main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number) {
        case 1:
            printf("The month is january");
            break;

        case 2:
            printf("The month is february");
            break;

        case 3:
            printf("The month is march");
            break;

        case 4:
            printf("The month is april");
            break;

        case 5:
            printf("The month is may");
            break;

        case 6:
            printf("The month is june");
            break;

        case 7:
            printf("The month is july");
            break;

        case 8:
            printf("The month is august");
            break;

        case 9:
            printf("The month is september");
            break;

        case 10:
            printf("The month is october");
            break;

        case 11:
            printf("The month is november");
            break;

        case 12:
            printf("The month is december");
            break;

        default:
            printf("Number must be between 1 - 12");
            break;
    }
}