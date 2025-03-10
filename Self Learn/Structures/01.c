//A collection of a values of different data types is called Structrues

//Write a progarm to store a data of three students;
#include <stdio.h>
#include <string.h>
struct students{
    char name[100];
    int age;
    float cgpa;
};


int main(){
    struct students s1;
    struct students s2;
    s1.age=20;
    s1.cgpa=60;
   strcpy(s1.name,"Unish Rai");

   s2.age=18;
   s2.cgpa=80;
   strcpy(s2.name,"Ram");

   printf("Roll NO: %d \n",s1.age);
   printf("CGPA: %f \n",s1.cgpa);
   printf("Name: %s \n",s1.name);

   printf("Roll NO: %d \n",s2.age);
   printf("CGPA: %f \n",s2.cgpa);
   printf("Name: %s \n",s2.name);
    
return 0;
}