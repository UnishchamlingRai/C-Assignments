//1.	Write an algorithm and C program that accepts two integers from the user as input and calculates the sum, diference, product, quotient and remainder applying different arithmetic operators between two integers using the concept of switch statement and odd loop.
#include <stdio.h>
int main() {
    int num1, num2, choice;
    float result;

    
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

   
    do {
        // Display the menu
        printf("\nChoose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Remainder\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operation based on the user's choice
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Sum: %d + %d = %.2f\n", num1, num2, result);
                break;

            case 2:
                result = num1 - num2;
                printf("Difference: %d - %d = %.2f\n", num1, num2, result);
                break;

            case 3:
                result = num1 * num2;
                printf("Product: %d * %d = %.2f\n", num1, num2, result);
                break;

            case 4:
                if (num2 != 0) {
                    result = (float)num1 / num2; // Cast to float for division
                    printf("Quotient: %d / %d = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            case 5:
                if (num2 != 0) {
                    result = num1 % num2;
                    printf("Remainder: %d %% %d = %.0f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            case 6:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please select a valid option.\n");
                break;
        }
    } while (choice != 6); // Loop until the user chooses to exit

    return 0;
}
