// Two strings are equal or not
#include<stdio.h>
int main(){
    char arr1[100];
    char arr2[100];
    printf("Enter 1st string: \n");
    scanf("%s", arr1);

    printf("Enter 2nd string: \n");
    scanf("%s", arr2);
    puts("");

    for(int i=0,j=0; arr1[i]!='\0' && arr2[j]!='\0'; j++, i++){
       
            if(arr1[i]!=arr2[j]){
                printf("Not same! ");
                return 0;
            }
        
    }

    printf("Same! ");
    return 0;
}