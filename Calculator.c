#include <stdio.h>

void main() {
    int num1, num2, sum;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("What type of caluclation do you want (+, -, *, /)");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            sum = num1 + num2;
            printf("The addition of %d and %d is: %d", num1, num2, sum);
            break;

        case '-':
            sum = num1 - num2;
            printf("The substraction of %d and %d is: %d", num1, num2, sum);
            break;

        case '*':
            sum = num1 * num2;
            printf("The multiplication of %d and %d is: %d", num1, num2, sum);
            break;

        case '/':
            sum = num1 / num2;
            printf("The division of %d and %d is: %d", num1, num2, sum);
            break;

        default:
            printf("Invalid operation");
            break;
    }
}