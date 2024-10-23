/* Copy elements of one array in second array in reverse order..
*/

#include <stdio.h>
int main()
{
    int arr[5]= {5,4,3,2,1};
    int arr2[5];
    int i,j=4;

    for( i=0; i<5; i++){
        while(j>=0){
            arr2[j] = arr[i];
            break;
            
        }
        j--;
    }

    for(int i=0; i<5; i++){
        printf("%d", arr2[i]);
    }    


    return 0;
}