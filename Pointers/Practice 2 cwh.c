/* Write a program having a variable i. Print the address of i. 
 Pass the variable to the function and print its
 address. Are the address are same? why? */

#include<stdio.h>

int var(int x);

int main(){
    int x=5;
    printf("%u\n", &(x));
    var(x);
    printf("%u\n", &(x));

    return 0;
}

int var(int x){
    printf("%u\n", &x);
}