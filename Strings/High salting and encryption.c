#include<stdio.h>
#include<string.h>

void salting1(char password[]){
    char salt1[]="111";
    char newpass[200];

    strcpy(newpass,password);
    strcat(newpass,salt1);
    
    puts(newpass);
}

void salting2(char password[]){
    char salt2[]="222";
    char newpass[200];

    strcpy(newpass,password);
    strcat(newpass,salt2);
    
    puts(newpass);
}

void salting3(char password[]){
    char salt3[]="333";
    char newpass[200];

    strcpy(newpass,password);
    strcat(newpass,salt3);
    
    puts(newpass);
}



int main(){
    char *password;
    printf("Enter your password: ");
    gets(password);
    puts(password);

    char salt1[]="abc";
    char salt2[]="def";
    char salt3[]="ghi";

    int i=0;

    while(password!='\0'){
        for()
    }

    

    

    
    

    return 0;
}