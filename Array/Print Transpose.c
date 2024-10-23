// Just print transpose of a matrix

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

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[j][i]);
        }
        puts("");
    }


    return 0;
}