//Write a C program that reads two integers and checks if they are multiples or not.
#include <stdio.h>

int main() {
    int num1, num2;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check for division by zero
    if (num2 == 0) {
        printf("Cannot determine multiples as the second number is zero.\n");
    } else if (num1 % num2 == 0) {
        printf("%d is a multiple of %d.\n", num1, num2);
    } else if (num2 % num1 == 0) {
        printf("%d is a multiple of %d.\n", num2, num1);
    } else {
        printf("Neither number is a multiple of the other.\n");
    }

    return 0;
}
