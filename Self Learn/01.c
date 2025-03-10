//WAP to 
#include <stdio.h>
int main(){
    int day;
    printf("Enter a day from 1 to 7");
    scanf("%d",&day);

    switch(day){
        case 1: printf("sunday");
        break;
        case 2: printf("Monday");
        break;
        case 3: printf("Tuesday");
        break;
        case 4: printf("wednesday");
        break;
        case 5: printf("Thursday");
        break;
        case 6: printf("Friday");
        break;
        case 7: printf("saturday");
        break;
        default:printf("invalid day");
    };
    return 0;
}