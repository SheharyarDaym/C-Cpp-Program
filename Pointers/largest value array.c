#include<stdio.h>

void pointer(int *ptr){
    int largest = *ptr;
    for(int i=0; i<5; i++){
        if(*ptr>largest){
            largest = *ptr;
        }
        ptr++;
    }
    printf("%u", largest);
}



int main(){

    int arr[]={1,7,8,9,4};

    pointer(arr);

    return 0;    
}