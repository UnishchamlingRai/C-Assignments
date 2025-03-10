//Write a function to count the occurence of vowels in a string.
#include <stdio.h>
#include <string.h>
int countVowel(char str[]);
int main(){
    char str[100];
    puts("Enter String:");
   scanf("%s",str);
    int numOfVowel=countVowel(str);
    printf("%d Vowels",numOfVowel);

    return 0;

}

int countVowel(char str[]){
    int i=0;
    int count=0;
   
   for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i',str[i]=='0',str[i]=='u'){
            count++;
        }
    }
    printf("Voewl: %d \n",count);
    return count;
}