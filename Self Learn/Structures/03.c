//Array of Stractures.
#include <stdio.h>
#include <string.h>
struct students{
    char name[100];
    char address[100];
    int rollNo;
    int age;
};
int main(){
    struct students bit[100];
    struct students csit[100];
    struct students s1={"Unish","lalitpur",19,17};

    bit[0].age=16;
    bit[0].rollNo=12;
    strcpy(bit[0].name,"Unish");
    strcpy(bit[0].address,"Lalitpur");

    printf("%d \n",bit[0].age);
    printf("%d \n",bit[0].rollNo);
    printf("%s \n",bit[0].name);
    printf("%s \n",bit[0].address);
    return 0;
}