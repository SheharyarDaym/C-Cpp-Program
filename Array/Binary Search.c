#include<stdio.h>
int main(){
    
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int low = 0;
    int high = 9;
    int middle;
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    while(low<=high){
        middle = (low+high)/2;

        if(arr[middle]<number){
            low = middle+1;
        }
        else if(arr[middle]>number){
            high = middle-1;
        }
        else if(arr[middle]==number){
            printf("%d", middle);
            break;
        }
    }

    return 0;
}