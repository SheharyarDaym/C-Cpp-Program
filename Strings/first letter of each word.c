/* C Program to Print the first Letter of Each Word..
    Geek For Geek
    G F G
*/

#include<stdio.h>
#include<string.h>

int main(){
    char name[]="Sheharyar Khan Daym";
    printf("%c ", name[0]);   // to print 1st alphabet
    for (int i=0; name[i]!='\0'; i++){
        if(name[i]==' ' && name[i+1]!='\0'){   //name[i+1] is used bcz current i is space..
            printf("%c ", name[i+1]);
        }
    }



    return 0;
}