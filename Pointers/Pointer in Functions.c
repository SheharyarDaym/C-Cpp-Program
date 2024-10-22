#include<stdio.h>

// Function Declaration
void square(int n);
void _square(int *n);

// Main Function
int main(){
    int number=5;
    square(number);
    printf("number is %d\n", number);

    _square(&number);  // Address of pointer =>&
    printf("number is %d\n", number);


    return 0;
}

// Function Definition
// call by value      =>> In Pointer
void square(int n){
    n = n*n;
    printf("%d\n", n);
}

void _square(int *n){
    *n = (*n) * (*n);           // pointer *
    printf("%u\n", *n);
}