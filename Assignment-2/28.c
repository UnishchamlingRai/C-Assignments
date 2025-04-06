/*
28.	Write a program using array of structure to store the data for 10 employees with fields( Essn, f_name, l_name, address, mobileno) , input the data for n employeess and display the record in appropriate format.
*/
#include <stdio.h>
struct EmployeesDetails{
    int sn;
    char firstName[100];
    char lastName[100];
    char address[100];
    int mobileNo;
};

int main(){
    int num=2;
    struct EmployeesDetails ED[num];
    printf("--------------Enter Employee Details-----------\n");
for(int i=0; i<num; i++){
    printf("SN:");
    scanf("%d",&ED[i].sn);

    printf(" FirstName:");
    scanf("%s",ED[i].firstName);

    printf(" LastName:");
    scanf("%s",ED[i].lastName);

    printf(" Address:");
    scanf("%s",ED[i].address);

    printf("Mobile No:");
    scanf("%d",&ED[i].mobileNo);
}

//Showing Results
// Display Table Header
printf("\n-------------------------------------------------------------\n");
printf("| %-5s | %-15s | %-15s | %-20s | %-15s |\n", "SN", "First Name", "Last Name", "Address", "Mobile No");
printf("-------------------------------------------------------------\n");

// Display Employee Records
for (int i = 0; i < num; i++) {
    printf("| %-5d | %-15s | %-15s | %-20s | %-15lld |\n", 
           ED[i].sn, ED[i].firstName, ED[i].lastName, ED[i].address, ED[i].mobileNo);
}

printf("-------------------------------------------------------------\n");
return 0;
}