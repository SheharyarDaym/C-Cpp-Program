// check if given character is present in string or not..

#include<stdio.h>
#include<string.h>

void ispresent(char str[]);

int main(){
    char name[]="Sheharyar";

    ispresent(name);
    

    return 0;
}

void ispresent(char str[]){
        char ch;
        printf("Enter character here: ");
        scanf("%c", &ch);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i] == ch){
            printf("Present\n");
            return ; // only this value print bcz return is used..
        }     
    }
            printf("Not Present\n");
}