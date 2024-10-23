// Write a function to count ODD numbers in array...
#include<stdio.h>

// Function Declaration
int odd(int *arr, int n);

// Main Function
int main(){
    int number[]={1,2,3,4,5,6,7,8,9};

    odd(number, 9);
    printf("Total count is: %d", odd(number, 9));

    return 0;
}

int odd(int *arr, int n){
    int count=0;

    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
}
