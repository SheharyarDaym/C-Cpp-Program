#include<stdio.h>
void mean(int arr[], int size){
    int sum=0;
    
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    sum = sum/size;
    printf("Mean is: %d\n", sum);
}

int mode(int arr[],int size){
    int count2=0;
    int MODE;
    for(int i=0; i<size; i++){
        int count=0;
        for(int j=0; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>count2){
            count2 = count;   
            MODE = arr[i];
        }
    }
    if(count2 == 0){
        printf("No Mode is Found!\n");
        return 0;
    }
    printf("Mode is: %d\n", MODE);

}

void median(int arr[]){
    int middle;
    middle = 5/2;
    printf("Median is: %d\n", arr[middle]);

}

void Bubble_Sort(int arr[], int size){
    int temp;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array: \n");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    puts("");
}

int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array here: \n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    Bubble_Sort(arr,size);
    mean(arr,size);
    median(arr);
    mode(arr,size);


    return 0;   
}