// Check two strings are anagram to each other or not.
// Example Earth --> Heart
// Note: Each character should have same frequency in both strings..

#include<stdio.h>
#include<string.h>
int main(){
    char arr1[100];
    char arr2[100];
    printf("Enter 1st string: \n");
    scanf("%s", arr1);

    printf("Enter 2nd string: \n");
    scanf("%s", arr2);
    puts("");

    int lenght = strlen(arr1);

    int test=0;
    for(int i=0; arr1[i]!='\0'; i++){
        for(int j=0; arr2[j]!='\0'; j++){
            if(arr1[i]==arr2[j]){
                test += 1;
                break;
            }
        }
    }

    if(test == lenght){
        printf("Anagram");
    }
    else{
        printf("Not anagram");
    }

    
    return 0;
}