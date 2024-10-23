
#include<stdio.h>


int main(){
    int n,m;
    printf("Enter row size\n");
    scanf("%d", &n);
    printf("Enter column size\n");
    scanf("%d", &m);

    int arr1[n][m];
    int arr2[n][m];
    int arr3[n][m];

    printf("Enter 1st matrix: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    
    printf("Enter 2nd matrix: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
   
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }        
        
    }


    // printing
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", arr3[i][j]);
        }
        puts("");
    }
    
    return 0;
}