// Program to find the greatest sum of row number
#include<stdio.h>


int main(){
    int n;
    int m;
    printf("Enter size\n");
    scanf("%d", &n);
   

    int arr[n][n];
    // input
    printf("Enter  matrix: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int s[n];
    
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            sum = sum + arr[i][j];
        }
        s[i] = sum;
    }
   
   for(int i=0; i<n; i++){
        printf("%d\n", s[i]);
   }


   // largest
   int max= s[0];
   int index = 0;
   for(int i=0; i<n; i++){
        if(max<s[i]){
            max = s[i];
            index = i;
        }
   }
   puts("");
   printf("The greater sum of the row is: %d", index);

   
    return 0;
}