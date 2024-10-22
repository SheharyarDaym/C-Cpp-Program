/* Pointer arithematic
=> We can subtract one pointer from another
=> We can also compare 2 pointers
*/

#include<stdio.h>
int main(){
    int number = 22;
    int *ptr = &number;
    int number2 = 23;
    int *_ptr = &number2;

    printf("Difference: %u\n", ptr-_ptr);     // Difference in pointer
    _ptr = &number;
    printf("comparison: %u\n", ptr ==_ptr);   // Comparison in pointer


    

    return 0;
}