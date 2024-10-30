// Write a program to reverse an array..

#include<stdio.h>
#include<string.h>

void reverse(char arr[]){
    int n = strlen(arr);
    for(int i=0, j=n-1; arr[i]!='\0';j--, i++){
        if(i==j){
            break;
        }
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

}

int main(){
    char name[]="Sheharyar";

    reverse(name);    
    printf("%s", name);


    return 0;
}