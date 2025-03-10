#include <stdio.h>

// Function to count occurrences of 'e' in a string
int countVowel(char str[]) {
    int count = 0, i = 0;
    
    // Traverse through the string until null terminator is found
    while (str[i] != '\0') {
        if (str[i] == 'e') {
            count++;
        }
        i++; // Move to the next character
    }
    
    return count;
}

int main() {
    char str[100];

    // Taking string input with spaces
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    // Call function to count 'e' occurrences
    int num = countVowel(str);

    // Print result
    printf("The number of times 'e' appears in the string is: %d\n", num);

    return 0;
}
