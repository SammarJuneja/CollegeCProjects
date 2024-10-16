#include <stdio.h>

void main() {
    int array[100], x, i, j, temp;

    printf("How many elements you want in array: ");
    scanf("%d", &x);

    for (i = 0; i < x; i++) {
        printf("Enter a number: ");
        scanf("%d", &array[i]);
    }

    for (i = 0; i < x-1; i++) {
        for (j = 0; j < x-i-1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    printf("Sorted array\n");
    for (i = 0; i < x; i++) {
        printf("%d\n", array[i]);
    }
}