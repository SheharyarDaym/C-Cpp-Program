// Take a string input from the user using %c..

#include<stdio.h>
int main(){
    char name[100];
    char ch;
    int i=0;
    
    while(ch != '\n'){
        scanf("%c", &ch);
        name[i]=ch;
        i++;
    }
    name[i] = '\0';
    puts(name);
    return 0;
}