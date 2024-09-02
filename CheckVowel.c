#include <stdio.h>

void main() {
    char alphabet;

    printf("Enter an alphabet: ");
    scanf(" %c", &alphabet);

    switch (alphabet) {
        case 'a':
            printf("%c is a vowel", alphabet);
            break;
        case 'e':
            printf("%c is a vowel", alphabet);
            break;
        case 'i':
            printf("%c is a vowel", alphabet);
            break;
        case 'o':
            printf("%c is a vowel", alphabet);
            break;
        case 'u':
            printf("%c is a vowel", alphabet);
            break;
        // uppercase
        case 'A':
            printf("%c is a vowel", alphabet);
            break;
        case 'E':
            printf("%c is a vowel", alphabet);
            break;
        case 'I':
            printf("%c is a vowel", alphabet);
            break;
        case 'O':
            printf("%c is a vowel", alphabet);
            break;
        case 'U':
            printf("%c is a vowel", alphabet);
            break;
        default:
            break;
    }
}