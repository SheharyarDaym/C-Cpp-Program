#include<stdio.h>



void merge(int arr1[], int arr2[], int n){
    puts("1st array");
    for(int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }

    puts("2nd array");
    for(int i=0; i<n; i++){
        scanf("%d", &arr2[i]);
    }

    int total = 0;
    for(int i=n; i<n*2; i++){
        arr1[i] = arr2[total++];
    }

    for(int i=0; i<n*2; i++){
        printf("%d  ", arr1[i]);
    }

}


int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int arr1[n*2];
    int arr2[n];

    merge(arr1, arr2, n);

    
    return 0;
}