/* Create a String FirstName & LastName to store details of user & print
   all the character using a loop.. */

#include<stdio.h>

// Function for string
int printString(char arr[]);

int main(){
    char FirstName[] =  "Sheharyar";
    char LastName[] = " Daym";

    printString(FirstName);
    printString(LastName);
    

    return 0;
}

// Definition
int printString(char arr[]){
    for(int i=0; arr[i]!='\0' ; i++){    // String end at \0.. that's why use .. arr[i]!='\0'
        printf("%c", arr[i]);
    }
    // printf("\n");
}



/*
// concatinate without using library functions

 char name[]="Sheharyar";
    char name_2[]=" Daym";
    char NAME[100];
    int i,j;
    for( i=0; name[i]!='\0'; i++){
        NAME[i] = name[i];
    }
    for( j=0; name_2[j]!='\0'; j++){
        NAME[i+j] = name_2[j];
    }
    NAME[i+j] =  '\0';
    printf("%s", NAME);



*/