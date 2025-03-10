#include <stdio.h>

void toUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char str[100]; // Array to store the input string

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Input the string (including spaces)

    // Convert the string to uppercase
    toUppercase(str);

    // Display the converted string
    printf("String in uppercase: %s\n", str);

    return 0;
}
