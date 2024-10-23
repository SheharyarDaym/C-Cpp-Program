// Array rotation 90 degree (Square matrix only)..

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter array: \n");
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
        
    }
    puts("");
    int transpose[n][n];
    // transpose
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            transpose[i][j] = arr[j][i];
        }
    }

    // rotation 90 degree..
    int a=0, b=n-1;
    /*
    it is used to replace 0,0 --> 0,(n-1)
                          0,1 --> 1,(n-1)
                          etc..
    */ 

    for(int k=0; k<n/2; k++){
            // swapping
        for(int i=0; i<n ; i++){
            int temp = transpose[i][a];
            transpose[i][a] = transpose[i][b];
            transpose[i][b] = temp;                
        }
        a++;
        b--;
    }
        
    
    // Print
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", transpose[i][j]);
        }
        puts("");
    }


    return 0;
}