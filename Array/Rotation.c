#include<stdio.h>

void rotation(int arr[], int n, int r){

    printf("Left or Right?\n");
    char side[10];
    scanf("%s", side);
    
    if(side[0] == 'r'){
        for(int k=0; k<r; k++){        
            for(int i=0 ,j=n-1; i<n;i++){        
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }   
        }
    }

    else if(side[0] == 'l'){
        for(int k=0; k<r; k++){        
            for(int i=n-1 ,j=0; i>=0;i--){        
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }   
        }
    }
    else{
        return;
    }


    // Printing
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

}

int main(){
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array: \n");

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int r;
    printf("Enter rotation times: ");
    scanf("%d", &r);

    rotation(arr,n,r);

    
    return 0;
}