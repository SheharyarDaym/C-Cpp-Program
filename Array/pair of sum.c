/* Find the total number of pairs in the Array whose sum is equal to the given value
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter number here: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers of array here: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int sum;
    printf("Which pairs of sum you want? ");
    scanf("%d", &sum);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]+arr[j]==sum){
                if(arr[i]==arr[j]){ // it will skinp if the same number is added like (6,6)=>12
                    continue;
                }
                printf("Pair(%d, %d): %d\n", arr[i], arr[j],sum);
            }
        }
    }

    return 0;
}