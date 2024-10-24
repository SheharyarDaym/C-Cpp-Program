/* Ask a user to enter their firstName & print it back to them.. 
And also try this with their fullName.. */

// Using gets

#include<stdio.h>

int firstName(char arr[]);
int fullName(char arr[]);

int main(){
    char fN[50];
    firstName(fN);
    
    char FN[100];
    fullName(FN);
    
    return 0;
}

// First Name
int firstName(char arr[]){
    char firstsName[50];
    printf("Enter here: ");
    scanf("%s", firstsName);
    printf("Your name is : %s", firstsName);
}

// Full Name
int fullName(char arr[]){
    char fullName[100];
    printf("Enter here: ");
    gets(fullName);   // scanf cannot input multi-words, so we use gets()..
    puts(fullName);
    // printf("Your name is : %s", fullName);
}