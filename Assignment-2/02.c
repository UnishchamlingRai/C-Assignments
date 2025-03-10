/*
Write a C program to read the score ¬¬of student and print the grade according to score as:
Score>=80, “Distinction”
Score from 70 to less than 80 “ First Division” 
Score from 55 to less than 70 “ Second Division” 
Sore from 40 to less than 55 “Third Division” 
Score less than 40,  “ Fail”

*/

#include <stdio.h>
int main() {
    int score;

   
    printf("Enter the student's score: ");
    scanf("%d", &score);

   
    if (score >= 80) {
        printf("Grade: Distinction\n");
    } else if (score >= 70) {
        printf("Grade: First Division\n");
    } else if (score >= 55) {
        printf("Grade: Second Division\n");
    } else if (score >= 40) {
        printf("Grade: Third Division\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
