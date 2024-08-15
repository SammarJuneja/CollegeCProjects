#include <stdio.h>

void main () {
    int symbol, num1, num2, sum;

    printf("What type of caluclation do you want-\nPress 1 for addition, \nPress 2 for subtraction, \nPress 3 for multiplication, \nPress 4 for division ");
    scanf("%d", &symbol);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (symbol == 1) {
        sum = num1 + num2;
        printf("The addition of %d and %d is %d", num1, num2, sum);
    }

    if (symbol == 2) {
        sum = num1 - num2;
        printf("The substraction of %d and %d is %d", num1, num2, sum);
    }

    if (symbol == 3) {
        sum = num1 * num2;
        printf("The multiplication of %d and %d is %d", num1, num2, sum);
    }

    if (symbol == 4) {
        sum = num1 / num2;
        printf("The division of %d and %d is: %d", num1, num2, sum);
    }
}