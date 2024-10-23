#include<stdio.h>
int main(){
    int array[10];
    printf("Enter number: ");

    // For input
    for(int i=0; i<=5; i++){
        scanf("%d", &array[i]);       
    }

    // For output
    for(int i=0; i<=5; i++){
        printf("%d\n", array[i]);
    } 

    return 0;
}