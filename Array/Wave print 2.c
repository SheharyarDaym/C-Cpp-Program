// Wave print 2.. 
/*
    * |     *       *  |
    *       *       *
    *       *  |    *
*/
#include<stdio.h>
int main(){
   int s1,s2;
    printf("Enter row and col: ");
    scanf("%d%d", &s1,&s2);
    int arr[s1][s2];
    printf("Enter array: \n");
    
    for(int i=0; i<s1; i++){
        for(int j=0; j<s2; j++){
            scanf("%d", &arr[i][j]);
        }
        
    }
    puts("");
    
    


    // For just printing 
    for(int j=0; j<s2; j++){
        if(j%2==0){
            for(int i=0; i<s1; i++){
                printf("%d ", arr[i][j]);
            }
        }
        else if(j%2!=0){
            for(int i=s1-1; i>=0; i--){
                printf("%d ", arr[i][j]);
            }
        }
    }


    return 0;
}