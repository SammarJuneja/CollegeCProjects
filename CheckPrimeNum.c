#include <stdio.h>

void main() {
    int number, isPrime = 1;
    clrscr();
    
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("%d is not a prime number", number);
    } else if (number == 2 || number == 3) {
        printf("%d is a prime number", number);
    } else if (number % 2 == 0 || number % 3 == 0) {
        printf("%d is not a prime number", number);
    } else {
        for (int i = 5; i * i <= number; i += 6) {
            if (number % i == 0 || number % (i + 2) == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d is a prime number", number);
        } else {
            printf("%d is not a prime number", number);
        }
    }
}