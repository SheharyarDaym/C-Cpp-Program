// Write a function to calculate Sum, Product and Average of 2 numbers. Print the average
// in the main function.

#include<stdio.h>

int DoWork(int a, int b, int *sum, int *product, int *average);



int main(){
    int a=3, b=5;
    int sum, product, average;

    DoWork(a,b,&sum,&product,&average);

    // printf("sum: %d, product: %d, average: %d", sum, product, average); All print in main..

    printf("Average : %d", average);
   

    return 0;
}

int DoWork(int a, int b, int *sum, int *product, int *average){
    *sum = a+b;
    *product = a*b;
    *average = (a+b)/2;
}
