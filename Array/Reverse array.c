// reverse an array without using 2nd array
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int temp;
    for(int i=0, j=4; i<5 && j>=0; i++, j--){
        if(i==j){
            break;
        }
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}