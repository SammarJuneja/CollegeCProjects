#include <stdio.h>

void main () {
   int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an even number", num);
    }
}