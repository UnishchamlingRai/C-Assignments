/*
25.	Write a program defining a structure to store the data for a student with fields( rollno, f_name, l_name, address, mobileno) , input the data for a student and display the record in appropriate format.

*/

#include <stdio.h>
struct studentDetails
{
    int rollno;
    char name[100];
    char address[100];
    char mobileNo[100];
};
int main(){
    struct studentDetails SD;

    printf("Roll No:\n");
    scanf("%d",&SD.rollno);

    printf("Name:\n");
    scanf("%s",SD.rollno);

    printf("Address:\n");
    scanf("%s",SD.address);\

    printf("Mobile No:\n");
    scanf("%s",SD.mobileNo);


    printf("----Student Details-----\n");
    printf("Roll No:\n",SD.rollno);
    printf("Name:\n",SD.name);
    printf("Address\n",SD.address);
    printf("Mobile No:\n",SD.mobileNo);
    
}
