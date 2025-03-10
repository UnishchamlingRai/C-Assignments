//Create a 2D array, storing the table of 2 & 3.
#include <stdio.h>
int main(){
    int tables[2][10];
    int test[2][10]={{2,4,6,8,10},{3,6,12,232,34}};
    for(int i=0; i<10; i++){
        tables[0][i]=2*(i+1);
    }
    for (int i=0; i<10; i++){
        tables[1][i]=3*(i+1);
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<10; j++){
            printf("%d \t",tables[i][j]);
        }
        printf("\n");
    }

    return 0;
}