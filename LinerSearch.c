#include <stdio.h>

void main() {
    int i, y, x[100], number, temp;
    
    printf("Enter the number of elements: ");
    scanf("%d", &i);
    
    for (y = 0; y < i; y++) {
      printf("Enter number: ");
      scanf("%d", &x[y]);
    }
    
    printf("Enter the search query: ");
    scanf("%d", &number);
    
    for (temp = 0; temp <= i; temp++) {
      if (x[temp] == number) {
        printf("%d is found at %d position", number, temp + 1);
        break;
      }
      if (temp == i) {
        printf("%d was not found", number);
      }
    }
}
