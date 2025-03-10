//Write a function named slice, which takes a string and returns a sliced string from index n to m;
#include <stdio.h>
#include <string.h>
void slice(char str[],int n, int m);
int main(){
    char str[100];
    int n,m;
    puts("Enter String:");
    fgets(str,100,stdin);

    printf("Enter index n:");
    scanf("%d",&n);
    printf("Enter index m:");
    scanf("%d",&m);
    slice(str,n,m);
    return 0;
}

void slice(char str[], int n, int m){
    char newStr[100];
    int count=0;
    for(int i=n; i<=m; i++){
        newStr[count]=str[i];
        count++;
    }
    newStr[count]='\0';
    puts(newStr);

}