/* Write a program to take string as an input from the user using %c
   and %s. Confirm that the strings are equal.. */

#include<stdio.h>
#include<string.h>

int main(){
    char str1[50];
    printf("Enter str1: ");
    scanf("%s", str1);
    fflush(stdin);
/* fflush is used to remove the cache of 1st scanf.. */


    char str2[50];
    char ch;
    int i=0;
    printf("Enter str2: ");

    while (ch!='\n')
    {
        scanf("%c", &ch);
        str2[i] = ch;
        i++;
    }
    str2[i]='\0';
    printf("Here: ");
    puts(str2);

    printf("Value of str1 is: %s\n", str1);
    // printf("Value of str2 is: %c\n", str2);


    


    return 0;
}