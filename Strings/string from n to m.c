/* Write a function named slice, which takes a string & returns a 
   sliced string from index n to m.. */

#include<stdio.h>

int slice(char index[], int n, int m);

int main(){
    char name[]="Sheharyar";
    slice(name,3,7);

    return 0;
}

int slice(char index[], int n, int m){
    for(n-1; n<m; n++){
        printf("%c", index[n]);
    }

}