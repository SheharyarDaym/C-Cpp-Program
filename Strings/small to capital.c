// Convert all uppercase letters to lowercase and vice versa in a given string (char array)

#include<stdio.h>
int main(){
    char name[100];
    printf("Enter here: ");
    gets(name);

    for(int i=0; name[i]!='\0'; i++){
        if(name[i]>='a' && name[i]<='z'){
            name[i] = name[i] - 32;
        }
            // printf("%c", name[i]);

        else if(name[i]>='A' && name[i]<='Z'){
            name[i] = name[i] + 32;
        }
            printf("%c", name[i]);
    }
    return 0;
}