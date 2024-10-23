
#include<stdio.h>
int main(){
    int arr[10];
    //input
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    
    int temp;
    
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
        if(arr[j]<arr[i]){
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
        }

    }

    // output
    for(int i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}