#include <stdio.h>

void printPattern(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
      for (int j = 0; j < (2 * (rows - i) - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}



