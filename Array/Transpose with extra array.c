// Transpose using extra array..

#include<stdio.h>

int main(){
    int ROW;
    printf("Enter row here: \n");
    scanf("%d", &ROW);

    int COL;
    printf("Enter Col here: \n");
    scanf("%d", &COL);

    int arr[ROW][COL];
    // input
    printf("ENter here: \n");
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // Transpose
    int j,i;
    int transpose[COL][ROW];
    for(i=0; i<ROW; i++){
        for(j=0; j<COL ; j++){
            transpose[j][i] = arr[i][j];
        }
    }


    // output
    puts("");
    printf("Transpose is:\n");
    for(i=0; i<COL; i++){
        for(j=0; j<ROW; j++){
            printf("%d ", transpose[i][j]);
        }
        puts("");
    }

    return 0;
}