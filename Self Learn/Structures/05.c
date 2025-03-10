//Passing stracture to function
#include <stdio.h>
#include <string.h>

struct students{
    char name[100];
    char address[100];
    int rollNo;
    int age;
};
void printStudentInfo(struct students s1);
int main(){
    struct students s1={"Unish","Lalitpur",19,20};
    printStudentInfo(s1);
    printf("%d \n",s1.rollNo);

    return 0;

}

void printStudentInfo(struct students s1){
    printf("%s \n",s1.name);
    printf("%s \n",s1.address);
    printf("%d \n",s1.age);
    s1.rollNo=1000;
    printf("%d \n",s1.rollNo);

}