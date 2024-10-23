//C Program to Calculate the Average of All Elements of an Array..
#include<stdio.h>

int main(){
    int n;
    printf("Enter lenght of array here: ");
    scanf("%d", &n);
    int arr[n];
    int sum=0;
    float avg;
    printf("Enter number here: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum/7;
    printf("Average: %.2f", avg);
    return 0;   
}