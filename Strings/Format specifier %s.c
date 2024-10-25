// Format specifier %s..

#include<stdio.h>
int main(){
    char name[40];
    printf("Enter name! ");
    scanf("%s", name);  // &name is not imp bcz array is a pointer
    printf("Your name is %s", name);
    return 0;
}