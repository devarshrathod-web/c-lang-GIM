#include <stdio.h>
int add( a,  b);
int subtract( a,  b);
int multiply( a,  b);
int divide( a,  b);

int main() {
    
    int num1, num2, result,select;
	
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("choose value for calculate ");
    scanf("%d", &select);

 printf("---------------------------------- \n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
 printf("---------------------------------- \n");

    switch(select) {
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
            printf("Result: %d\n", result);
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

