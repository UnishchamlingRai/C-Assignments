//Write a C program to print your name, date of birth and mobile number.
#include <stdio.h>
int main(){
    char dateOfBirth[100];
    char name[100];
    int mobileNumber;
    printf("Enter Your name: ");
    scanf("%s",name);

    printf("Enter Your Date of birth: YYYY/MM/DD: ");
    scanf("%s",dateOfBirth);

    printf("Enter Your Mobile Number: ");
    scanf("%d",&mobileNumber);

    printf("\n Your Name is %s",name);
    printf("\n Your Date of Birth is %s",dateOfBirth);
    printf("\n Your Phone Number is %d",mobileNumber);

    return 0;
}