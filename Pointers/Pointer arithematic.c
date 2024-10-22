// Pointer arithematic

#include<stdio.h>
int main(){
    float age=22.00;
    float *ptr = &age;
    printf("%u\n", ptr);
    ptr++;    // increment in address not in value
    printf("%u\n", ptr);
    ptr--;   // decrement in address not in value
    printf("%u\n", ptr);
    

    return 0;
}