// Write a program to find minimum number in an array..

#include<stdio.h>
int main(){
    int number[100];
    printf("Enter numbers here: ");
    for(int i=0; i<=i; i++){            
        scanf("%d", &number[i]);
        if(number[i]==EOF){             // EOF breaks on ctrl+z
            break;
        }
    }
    int minimum = number[0];

    for(int i=0; i<=9; i++){
        if(minimum > number[i]){        // if larger then just change the sign (<)
            minimum = number[i];
        }

    }
    printf("%d", minimum);
    
    return 0;
}