//  Write a function to count the occurence of vowels in a string..

#include<stdio.h>
#include<string.h>

int vowel(char uni[]);

int main(){
    char university[]= "universityofpunjab";

    vowel(university);
    printf("%d", vowel(university));

    return 0;
}

int vowel(char uni[]){
    int count=0;
    for(int i=0; uni[i]!='\0'; i++){
    if(uni[i]=='a' || uni[i]=='e'|| uni[i]=='i' || uni[i]=='o'|| uni[i]=='u'){
        count ++;
     }
    }
    return count;
}