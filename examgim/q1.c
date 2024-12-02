#include <stdio.h>
int add( a,  b);
int subtract( a,  b);
int multiply( a,  b);
int divide( a,  b);

int main() {
    int choice;
    int num1, num2, result;
	
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("choose value for calculate ");
    scanf("%d", &choice);

 printf("---------------------------------- \n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
 printf("---------------------------------- \ns");

    switch(choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %d\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %d\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %df\n", result);
            break;
        case 4:
            if(num2 != 0) {
                result = divide(num1, num2);
                printf("Result: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;
        default:
            printf("Invalid choice! Please enter a valid option.\n");
            break;
    }

    return 0;
}



int add( a,  b) {
    return a + b;
}

 int subtract( a,  b) {
    return a - b;
}

 int multiply( a,  b) {
    return a * b;
}

 int divide( a, b) {
    return a / b;
}

