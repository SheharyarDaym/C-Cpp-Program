/* Find the total number of pairs in the Array whose sum is equal to the given value
 */

#include <stdio.h>
int main()
{
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

            for(int k=0; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == sum){
                    if(arr[i] == arr[j] && arr[j] == arr[k] && arr[k]== arr[i]){ 
                        // it will skip if the same number is added like (6,6)=>12
                        continue;
                    }
                    printf("Pair(%d, %d,%d): %d\n", arr[i], arr[j],arr[k], sum);
                }
            }
        }
    }

    return 0;
}