#include <stdio.h>


void swap(int *a, int *b) {
    int temp; 
    
    temp = *a;  
    *a = *b;    
    *b = temp;  
}

int main() {
    int 1, 2;

    printf("Enter the first number: ");
    scanf("%d", &1);
    printf("Enter the second number: ");
    scanf("%d", &2);
  printf("-----------------------------------------------");
    printf("\nAfter swapping: \n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
 printf("-----------------------------------------------");

}

