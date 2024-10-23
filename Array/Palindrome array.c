// check whether the array is Palindrome or not..

#include<stdio.h>


void isPalindrome(int arr[], int n){
    // input array
     for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
     }

    for(int i=0,j=n-1; i<n && j>=0; i++, j--){
        
            if(arr[i] != arr[j]){
            	printf("Not Palindrome\n");
                return ;
            }
            else{ 
                continue;
            }
        
    }
        printf("Palindrome array!");
        // return 1;

}

int main(){
    int n;
    printf("Enter number here: ");
    scanf("%d", &n);
    int arr[n];
    isPalindrome(arr,n);

    // if(isPalindrome(arr,n)==1){

    // }
    // else{
    //     printf("Not Palindrome array!");

    // }
    return 0;
}