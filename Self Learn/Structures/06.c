//typedef keword
/*
typedef is used to create a alias for data types
*/
#include <stdio.h>
#include <string.h>
typedef struct BachlorOfInformationTechnologyStudents{
    char name[100];
    char address[100];
    int rollNo;
    int age;
}BITs;
int main(){
    BITs s1;
    s1.age=34;
    s1.rollNo=23;
    strcpy(s1.address,"Lalitpur");
    strcpy(s1.name,"Ram");

    printf("%s \n",s1.address);

    return 0;


}