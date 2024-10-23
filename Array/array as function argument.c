// Array as function argument..

#include<stdio.h>

// Function Declaration
void printNumber(int arr[], int n);
/*                OR
void printNumber(int *arr, int n);

Both will have same output..
*/

// Main Function
int main(){
    int arr[] = {1,2,3,4,5,6};
    printNumber(arr, 6);

    return 0;
}

// Function Definition
void printNumber(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
