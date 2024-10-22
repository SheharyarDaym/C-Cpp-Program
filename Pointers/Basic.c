#include<stdio.h>
int main(){
    int my_number;
    printf("Enter number here! ");
    scanf("%d", &my_number);

    int *ptr = &my_number;
    int number = *ptr;
    printf("%d", number);
    return 0;
}