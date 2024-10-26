// Make a program that inputs user's name & prints it lenght..

#include<stdio.h>

// Declaration..
int countLength(char arr[]);

int main(){
    char name[100];
    printf("Enter name here: ");
    fgets(name,100,stdin);

    printf("%d", countLength(name));
    /* 
    can also be done using header file  ..    
    #include<string.h>

    printf("%lu", strlen(name));    // lu<= unsigned long
    
    */ 

    return 0;
}

// Function..
int countLength(char arr[]){
    int count = 0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count-1;
}