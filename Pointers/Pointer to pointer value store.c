// Print value of i from its pointer to pointer..

#include<stdio.h>
int main(){
    int i=45;
    int *ptr= &i;                         // * => value of address
    int **pptr = &ptr;

    printf("%u\n", **pptr);
    
    
    

    return 0;
}