//Pointer to Stracture;
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
   
    struct students s1={"Unish","ktm",20,18};
    struct students *ptr;
    ptr=&s1;
    printf("%s \n",(*ptr).name);
    printf("%s \n",ptr->address);
    printf("%s \n",ptr->rollNo);


  
    return 0;
}