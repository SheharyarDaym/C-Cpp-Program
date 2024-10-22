// 
#include<stdio.h>
int main(){
    // Pointer syntax
    int age = 20;
    int *ptr = &age;       
    int _age = *ptr;


    printf("%d", _age);
    return 0;
}