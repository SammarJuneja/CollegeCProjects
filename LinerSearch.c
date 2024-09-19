#include <stdio.h>

void main() {
    int i;
    int number;
    
    printf("Enter the number of elements: ");
    scanf("%d", &i);
    
    int x[i];
    
    for (int y = 0; y < i; y++) {
      printf("Enter number: ");
      scanf("%d", &x[y]);
    }
    
    printf("Enter the search query: ");
    scanf("%d", &number);
    
    for (int temp = 0; temp <= i; temp++) {
      if (x[temp] == number) {
        printf("%d is found at %d position %d", number, temp+1);
        break;
      }
      if (temp == i) {
        printf("%d was not found", number);
      }
    }
}
