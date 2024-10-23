#include<stdio.h>
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf(" %d", arr[i]);
    }
    puts("");
}
void rotation(int arr[], int n, int shift){
    int temp;
    while(shift){
        temp = arr[n-1];
        for(int i=n-1; i>=0; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
        shift--;
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    print(arr,6);
    rotation(arr,6,3);
    print(arr,6);
    
    return 0;
}