/* Find salted from a password entered by user if the salt
   is "123" & added at the end.. */

#include<stdio.h>
#include<string.h>

int main(){ 
    char password[100];
    printf("Enter your password: ");
    scanf("%s", &password);

    char salt[]="123";

   // strcat(password,salt) => Concatenate both chars..
    printf("Your salted password is: %s", strcat(password,salt));

    return 0;
}

/*
    2nd method using functions and copy string strcpy()...


int main(){
    char password[100];
    printf("Enter your password: ");
    scanf("%s", &password);

    salting(password);
    return 0;
}

void salting(char password[]){
    char salt[]="123";
    char newpass[200];

    strcpy(newpass,password);
    strcat(newpass,salt);
    
    puts(newpass);
}



*/