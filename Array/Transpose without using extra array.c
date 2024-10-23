// Transpose without using extra array..

#include<stdio.h>
int main(){
    int n;
    printf("Enter size: \n");
    scanf("%d", &n);

    int m;
    printf("Enter size 2: \n");
    scanf("%d", &m);

    int arr[n][m];
    // input
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // transpose
    for(int i=0; i<n; i++){
        for(int j=i; j<m; j++){
            int temp = arr[j][i];
            arr[j][i] = arr[i][j];
            arr[i][j] = temp;
            
        }
    }

    // output
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        puts("");
    }


    return 0;
}