/*
    ---->
    <----
    ---->

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
    

    int a=0, b=s2-1;
    for(int k=0; k<s2/2; k++){
        for(int i=0; i<s1; i++){
            if(i%2!=0){
                int temp = arr[i][a];
                arr[i][a] = arr[i][b];
                arr[i][b] = temp;
            }     
        }  
                a++;
                b--;
    }  
   
    
    for(int i=0; i<s1; i++){
        for(int j=0; j<s2; j++){
            printf("%d ", arr[i][j]);
        }
        puts("");
        
    }


    return 0;
}