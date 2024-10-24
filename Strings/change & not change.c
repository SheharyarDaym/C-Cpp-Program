// Value of string can be changed and not changed..

#include<stdio.h>
int main(){
    // value of string can be change using pointers..
    char *name="Daym";
    printf("%s\n", name);

    name = "Sheharyar";
    printf("%s\n", name);

    name = "khan";
    printf("%s\n", name);

    // value cannot be change using array..
    char _name[]= "Sheharyar";
    printf("%s\n", _name);
    

    return 0;
}