#include<stdio.h>

void printArray(int *arry, int n){
    for(int i=0; i<=n; i++){
        printf("%d\n", arry[i]);
    }
    arry[2]=123; // it will change value in main funciton because of address..
}

int main(){
    int array[]={1,2,4,6,0,0};
    // printf("%s\n", &array);
    printArray(array, 5);

    printf("\n%d", array[2]);  // for changing value in main funtion like pointer

    // printf("%d", &array);

    return 0;
}