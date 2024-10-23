// Write a program to find minimum number in an array..

#include<stdio.h>
int main(){
    int number[9]={6,2,7,9,4,2,5,87,846};
    int minimum = number[0];

    for(int i=0; i<=9; i++){
        if(minimum > number[i]){        // if larger then just change the sign (<)
            minimum = number[i];
        }

    }
    printf("%d", minimum);
    
    return 0;
}