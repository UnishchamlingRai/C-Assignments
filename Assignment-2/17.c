#include <stdio.h>
#include <string.h>  // Required for strcpy() and strcmp()

int calStringlength(char str[]);  // Correct function declaration
void reverString(char str[], int len); // Return type changed to void

int main() {
    char str[100];

    printf("Enter a String: ");
    scanf("%99s", str);  // Prevents buffer overflow

    int len = calStringlength(str);
    printf("Length: %d\n", len);

    char perserve[100];  
    strcpy(perserve, str);  // Correct way to copy a string

    reverString(str, len);
    printf("str after rev: %s\n", str);

    if (strcmp(perserve, str) == 0) {  // Correct way to compare strings in C
        printf("String is a palindrome.\n");
    } else {
        printf("Not a palindrome.\n");
    }

    return 0;
}

int calStringlength(char str[]) {
    int count = 0;
    while (str[count] != '\0') {  
        count++;
    }
    return count;
}

void reverString(char str[], int len) {  // Changed return type to void
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];  // Corrected index
        str[len - i - 1] = temp;
    }
}
