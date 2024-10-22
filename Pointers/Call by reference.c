// Write a program to change the value of a variable to 10 times of its current value.
// Write a function and pass the value by reference..

#include<stdio.h>

int value(int *x);

int main(){
    int i=5;
    printf("value of i : %d\n", i);
    value(&i);          // function call
    printf("Value of i call by reference is : %u\n", i);


    return 0;
}

int value(int *x){
    *x = (*x) * 10;            
}