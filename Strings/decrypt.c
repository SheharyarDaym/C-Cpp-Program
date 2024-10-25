/* Write a program to decrypt a string by adding 1 to the ascii
   value of its character.. */

#include<stdio.h>
#include<string.h>

void decrypt(char c[]);

int main(){
    char c[]="Tifibszbs"; // Sheharyar
    decrypt(c);
    printf("decrypted string is %s", c);

    return 0;
}

void decrypt(char c[]){
    char *ptr = c;
    while(*ptr!='\0'){
    /* increament in value.. char has only 1 bit
    such that increament in A is 1 and this will be B..*/
        *ptr = *ptr - 1;   
    /* ptr++ is increament in address not in value */
        ptr++;
    }
}

