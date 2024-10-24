/* C Program to Print the Capital Letter of Each Word..
    Geek For Geek
    G F G
*/

#include<stdio.h>
#include<string.h>

int main(){
    char name[]="Sheharyar Khan Daym";

    for (int i=0; name[i]!='\0'; i++){
        if(name[i]>='A' && name[i]<='Z'){
            printf("%c ", name[i]);
        }
    }

   






    return 0;
}