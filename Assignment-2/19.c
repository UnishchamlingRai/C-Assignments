#include <stdio.h>

float calculate(float num1, float num2, char op); 

int main() {
    float num1, num2, result;
    char op;

    
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &op);  

    printf("Enter second number: ");
    scanf("%f", &num2);

   
    result = calculate(num1, num2, op);

   
    if (op == '/' && num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else if (op == '%' && ((int)num2 == 0)) {
        printf("Error! Modulus by zero is not allowed.\n");
    } else {
        printf("Result: %.2f\n", result);
    }

    return 0;
}

// Function to perform arithmetic operations
float calculate(float num1, float num2, char op) {
    switch (op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': 
            if (num2 != 0) 
                return num1 / num2;
            else
                return 0;  
        case '%': 
            if ((int)num2 != 0) 
                return (int)num1 % (int)num2;
            else 
                return 0;  
        default:
            printf("Invalid operator!\n");
            return 0;
    }
}
