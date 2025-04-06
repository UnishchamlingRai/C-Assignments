/*30.	Write a program to prompt user to input filename and read the content of file and display in screen.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *file;
    char ch;

    // Prompt user to enter filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read and display file content
    printf("\nContents of %s:\n", filename);
    ch=fgetc(file);
    while (ch!=EOF)
    {
       printf("%c",ch);
      ch= fgetc(file);
    }
    

    // Close the file
    fclose(file);
    return 0;
}