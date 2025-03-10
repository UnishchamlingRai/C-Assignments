//Enter address(house no, block, city,state) of 5 people;
#include <stdio.h>
#include <string.h>
typedef struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];

}add;
int main(){
    add a1[3];
    

    printf("Enter 1st person address:\n");
    scanf("%d",&a1[0].houseNo);
    scanf("%d",&a1[0].block);
    scanf("%s",a1[0].city);
    scanf("%s",a1[0].state);

    printf("Enter 2nd person address:\n");
    scanf("%d",&a1[1].houseNo);
    scanf("%d",&a1[1].block);
    scanf("%s",a1[1].city);
    scanf("%s",a1[1].state);

    printf("Enter 3rd person address:\n");
    scanf("%d",&a1[2].houseNo);
    scanf("%d",&a1[2].block);
    scanf("%s",a1[2].city);
    scanf("%s",a1[2].state);

    printf("House NO=%d  blick=%d  city=%d  state=%d \n",a1[0].houseNo,a1[0].block,a1[0].city,a1[0].state);
    printf("House NO=%d  blick=%d  city=%d  state=%d \n",a1[1].houseNo,a1[1].block,a1[1].city,a1[1].state);
    printf("House NO=%d  blick=%d  city=%d  state=%d \n",a1[2].houseNo,a1[2].block,a1[2].city,a1[2].state);

    return 0;

}