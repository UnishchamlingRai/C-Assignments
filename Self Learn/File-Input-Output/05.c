//Make a program to input student information from a user and enter it to file.
#include <stdio.h>
int main(){
    FILE *fptr;
    char name[100];
    int age;
    float cgpa;

    fptr=fopen("studentInfo.txt","w");
    printf("Enter Name:");
    scanf("%s",name);

     printf("Enter Age:");
    scanf("%d",&age);

    printf("Enter cgpa:");
    scanf("%f",&cgpa);

    fprintf(fptr,"Student Name:%s \n",name);
    fprintf(fptr,"Student age:%d \n",age);
    fprintf(fptr,"Student cgpa:%f \n",cgpa);

    fclose(fptr);
    return 0;
}