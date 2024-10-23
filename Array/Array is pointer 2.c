// Program to enter marks using pointer..

#include<stdio.h>
int main(){
    int marks[5];
    int *ptr;
    ptr = &marks[0];   //   =>  ptr = marks; .. Both are same

    // For input
    for(int i=0; i<=5; i++){
        printf("Enter marks of %d student: \n", i+1);
        scanf("%d", &marks[i]);
        ptr++;
    }

    // For output
    for(int i=0; i<=5; i++){
        printf("Marks of %d student is %d \n", i+1, marks[i]);
    }
    return 0;
}