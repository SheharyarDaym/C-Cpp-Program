/* Write a program to encrypt a string by adding 1 to the ascii
   value of its character.. */

#include<stdio.h>
#include<string.h>

void encrypt(char c[]);

int main(){
    char c[]="Sheharyar";
    encrypt(c);
    printf("Encrypted string is %s", c);

    return 0;
}

void encrypt(char c[]){
    char *ptr = c;
    while(*ptr!='\0'){
    /* increament in value.. char has only 1 bit
    such that increament in A is 1 and this will be B..*/
        *ptr = *ptr + 1;   
    /* ptr++ is increament in address not in value */
        ptr++;
    }
}


// Without using Funtion

/*int main(){
    
   char c[]="v";
   char *ptr = c;


   while(*ptr!='\0'){
    *ptr = *ptr + 1;
        ptr++;
   printf("%s", c);
 }*/