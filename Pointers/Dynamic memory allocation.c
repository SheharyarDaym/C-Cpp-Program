
// Dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr;
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    // ptr = (int *) malloc(n* sizeof(int));
    ptr = (int *) calloc(n, sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    
    printf("Enter size: ");
    scanf("%d", &n);

    ptr = realloc(ptr,n);
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }



    free(ptr);


    return 0;
}