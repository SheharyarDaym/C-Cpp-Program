// Array is pointer..
// Traverse of an array..
// Index is 0..
#include<stdio.h>

int main(){
    int number[5];
    int *ptr = &number[0];
// for input
    for(int i=0; i<5; i++){
        printf("%d : index", i);
        scanf("%d", (ptr + i));    // &number[i]
    }
// for output
    for(int i=0; i<5; i++){
        printf("%d\n%d",i,*(ptr+i) );   // i, number[0] => also possible for same output
    }
    
    return 0;
}